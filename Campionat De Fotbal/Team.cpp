#include "Team.h"

Team::Team(std::string name) : 
	team_name(name) {}

void Team::coppy_team_playes(Team team, std::map<std::string, int>& team_cards_count) {
	for (auto pl : players) {
		team_cards_count[pl.get_player_name()] = 0;
	}
}

void Team::add_player(Player player) {
	players.push_back(player);
}

void Team::update_points(int points) {
	team_points += points;
}

Player& Team::random_player() {
	srand(time(0));

	// luam un jucator la intamplare din lista de jucatori
	int random = rand() % players.size();
	return this->players[random];
}

std::string Team::get_team_name() { return team_name; }

int Team::total_team_goals() {
	int team_goals = 0;
	for (auto &pl : players) {
		team_goals += pl.total_goals();
	}
	return team_goals;
}

void Team::get_stats() {
	system("cls");
	std::cout << "    ----" << team_name << "----    \n";
	std::cout << "Total Goals Scored: " << total_team_goals() << "\n";
}