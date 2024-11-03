#pragma once
#include "Team.h"
#include <utility>
class Match
{
public:
	Match(Team team1, Team team2);
	void score_goal_team1(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count);
	void score_goal_team2(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count);
	void yellow_card_team1(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count);
	void yellow_card_team2(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count);
	void red_card_team1(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count);
	void red_card_team2(bool visual, Player& player, Team& team, std::map<std::string, int>& team_cards_count);
	std::pair<std::string, std::string> simulate_match(bool visual);
private:
	Team team1;
	Team team2;
	int team1_goals = 0;
	int team2_goals = 0;
};

