#pragma once // previne fila sa fie inclusa de mai multe ori
#include<iostream>
class Player
{
public:
	Player(std::string name, int age, std::string position, std::string country);
	void score_goal();
	void assist_goal();
	void take_yellow_card();
	void take_red_card();
	void update_team(std::string team);
	void suspend();
	void player_profile();
	std::string get_player_name();
	int total_goals();

private:
	std::string player_name;
	std::string player_position;
	std::string current_team = "Free of Contract";
	std::string player_country;
	int player_age;
	int red_cards = 0;
	int yellow_cards = 0;
	int goals_scored = 0;
	int assists = 0;
	bool active_suspension = false;
};

