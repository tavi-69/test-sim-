#pragma once
#include "Match.h";
class League
{
public:
	League();
	void add_team(Team team);
	void schedule_matches();
	void simulate_league(bool visual);
	void display_league();
private:
	std::vector<Team> teams;
	std::vector<Match> matches;
	std::map<std::string, int> clasament;
};

