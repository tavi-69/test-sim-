#include "Player.h"

Player::Player(std::string name, int age, std::string position, std::string country) : 
	player_name(name), player_age(age), player_position(position), player_country(country) {}

std::string Player::get_player_name() { return player_name; }

void Player::score_goal() {
	this->goals_scored++;
}

void Player::assist_goal() {
	this->assists++;
}

void Player::take_yellow_card() {
	this->yellow_cards++;
	if (yellow_cards == 2) {
		take_red_card();
	}
}

void Player::take_red_card() {
	this->red_cards++;
	suspend();
}

void Player::update_team(std::string team) {
	current_team = team;
}

void Player::suspend() {
	this->active_suspension = true;
}

void Player::player_profile() {
	system("cls");
	std::cout << "Name: " << player_name << "\n";
	std::cout << "Age: " << player_age << "\n";
	std::cout << "Country: " << player_country << "\n";
	std::cout << "Position: " << player_position << "\n";
	std::cout << "Team: " << current_team << "\n";
	std::cout << "Goals: " << goals_scored << "\n";
	std::cout << "Yellow Cards: " << yellow_cards << "\n";
	std::cout << "Red Cards: " << red_cards << "\n";
	std::cout << "Suspended: " << (active_suspension ? "YES" : "NO") << "\n";
}

int Player::total_goals() { return goals_scored; }