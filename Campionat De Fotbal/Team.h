#pragma once // previne fila sa fie inclusa de mai multe ori
#include "Player.h"
#include <vector>
#include <random>
#include <time.h>
#include <map>
#include <windows.h>

class Team
{
public:
	Team(std::string name);
	void add_player(Player player);
	void update_points(int points);
	void coppy_team_playes(Team team, std::map<std::string, int>& team_cards_count);
	std::string get_team_name();
	int total_team_goals();
	Player& random_player();
	void get_stats();

private:
	std::string team_name;
	std::vector<Player> players;
	int team_points = 0;
	int matches_played = 0;
};

