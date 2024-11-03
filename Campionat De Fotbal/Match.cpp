#include "Match.h"

Match::Match(Team team1, Team team2) : 
	team1(team1), team2(team2) {}

void Match::score_goal_team1(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count) {
	std::string name = player.get_player_name();
	while (team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	player.score_goal();
	if(visual)
		std::cout << "Goal! - " << player.get_player_name();
	std::string temp = name;
	while (player.get_player_name() == temp || team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	if(visual)
		std::cout << " (" << name << ")\n\n";
	player.assist_goal();
	team1_goals++;
}

void Match::score_goal_team2(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count) {

	std::string name = player.get_player_name();
	while (team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	player.score_goal();
	if (visual)
		std::cout << "Goal! - " << player.get_player_name();
	std::string temp = name;
	while (player.get_player_name() == temp || team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	if (visual)
		std::cout << " (" << name << ")\n\n";
	player.assist_goal();
	team2_goals++;
}

void Match::yellow_card_team1(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count) {
	std::string name = player.get_player_name();
	while (team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	team_cards_count[name]++;
	player.take_yellow_card();
	if (team_cards_count[name] == 2) {
		if (visual)
			std::cout << "Second Yellow Card - " << name << "\n\n";
		team_cards_count[name] = 3;
	}
	else {
		if (visual)
			std::cout << "Yellow Card - " << name << "\n\n";
	}
}

void Match::yellow_card_team2(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count) {
	std::string name = player.get_player_name();
	while (team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	team_cards_count[name]++;
	player.take_yellow_card();
	if (team_cards_count[name] == 2) {
		if (visual)
			std::cout << "Second Yellow Card - " << name << "\n\n";
		team_cards_count[name] = 3;
	}
	else {
		if (visual)
			std::cout << "Yellow Card - " << name << "\n\n";
	}
}

void Match::red_card_team1(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count) {
	std::string name = player.get_player_name();
	while (team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	player.take_red_card();
	team_cards_count[name] = 3;
	if (visual)
		std::cout << "Red card - " << name << "\n\n";
}

void Match::red_card_team2(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count) {
	std::string name = player.get_player_name();
	while (team_cards_count[name] > 1) {
		player = team.random_player();
		name = player.get_player_name();
	}
	player.take_red_card();
	team_cards_count[name] = 3;
	if (visual)
		std::cout << "Red card - " << name << "\n\n";
}

std::pair<std::string, std::string> Match::simulate_match(bool visual) {
	srand(time(0));
	std::map<std::string, int> team1_cards_count, team2_cards_count;

	team1.coppy_team_playes(team1, team1_cards_count);
	team2.coppy_team_playes(team2, team2_cards_count);

	if (visual) {
		system("cls");
		std::cout << "------------------ [Match Facts] -------------------\n\n";

		int mijloc = team1.get_team_name().size() + team2.get_team_name().size() + 4;

		for (int i = 0; i < (56 - mijloc) / 2; ++i) std::cout << " ";
		std::cout << team1.get_team_name() << " VS " << team2.get_team_name() << "\n\n";

		for (int alexony = 0; alexony < 52; alexony++) std::cout << "-"; // Alexony este designerul meu grafic
		std::cout << "\n\n";

		int yellow_t1 = 0, yellow_t2 = 0, red_t1 = 0, red_t2 = 0;

		for (int i = 0; i < 93; ++i) {
			if (rand() % 20 == 1) {
				int variable = rand() % 6;
				switch (variable) {
				case 0: // goal team1
					if (i < 10) std::cout << " ";
					std::cout << " " << i << "'   ";
					score_goal_team1(true, team1.random_player(), team1, team1_cards_count);
					break;
				case 1: // goal team2
					if (i < 10) std::cout << " ";
					std::cout << " " << i << "'   ";
					score_goal_team2(true, team2.random_player(), team2, team2_cards_count);
					break;
				case 2: // cartonas galben team1
					if (yellow_t1++ > 2) break;
					if (i < 10) std::cout << " ";
					std::cout << " " << i << "'   ";
					yellow_card_team1(true, team1.random_player(), team1, team1_cards_count);
					break;
				case 3: // cartonas galben team2
					if (yellow_t2++ > 2) break; 
					if (i < 10) std::cout << " ";
					std::cout << " " << i << "'   ";
					yellow_card_team2(true, team2.random_player(), team2, team2_cards_count);
					break;
				case 4: // cartonas rosu team1
					if (red_t1++ > 1) break;
					if (i < 10) std::cout << " ";
					std::cout << " " << i << "'   ";
					red_card_team1(true, team1.random_player(), team1, team1_cards_count);
					break;
				case 5: // cartonas rosu team2
					if (red_t2++ > 1) break; 
					if (i < 10) std::cout << " ";
					std::cout << " " << i << "'   ";
					red_card_team2(true, team2.random_player(), team2, team2_cards_count);
					break;
				}
			}
		}
		std::cout << "---------------------------------------------------\n\n";
		std::cout << " FIN - " << team1.get_team_name() << " " << team1_goals << " - " << team2_goals << " " << team2.get_team_name() << "\n\n";
		std::cout << "---------------------------------------------------\n\n";
	}
	else {
		for (int i = 0; i < 93; ++i) {
			if (rand() % 20 == 1) {
				int variable = rand() % 6;
				switch (variable) {
				case 0: // goal team1
					//std::cout << i << "'  ";
					score_goal_team1(false, team1.random_player(), team1, team1_cards_count);
					break;
				case 1: // goal team2
					//std::cout << i << "'  ";
					score_goal_team2(false, team2.random_player(), team2, team2_cards_count);
					break;
				case 2: // cartonas galben team1
					//std::cout << i << "'  ";
					yellow_card_team1(false, team1.random_player(), team1, team1_cards_count);
					break;
				case 3: // cartonas galben team2
					//std::cout << i << "'  ";
					yellow_card_team2(false, team2.random_player(), team2, team2_cards_count);
					break;
				case 4: // cartonas rosu team1
					//std::cout << i << "'  ";
					red_card_team1(false, team1.random_player(), team1, team1_cards_count);
					break;
				case 5: // cartonas rosu team2
					//std::cout << i << "'  ";
					red_card_team2(false, team2.random_player(), team2, team2_cards_count);
					break;
				}
			}
		}
	}

	Sleep(2000);

	if (team1_goals > team2_goals) {
		return std::make_pair(team1.get_team_name(), "0");
	}
	else if (team1_goals < team2_goals) {
		return std::make_pair("0", team2.get_team_name());
	}
	else {
		return std::make_pair(team1.get_team_name(), team2.get_team_name());
	}

}