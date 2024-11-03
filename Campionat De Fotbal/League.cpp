#include "League.h"

League::League() {}


void League::add_team(Team team) {
	teams.push_back(team);
}

void League::schedule_matches() {
	for (auto prima_echipa = 0; prima_echipa < teams.size() - 1; ++prima_echipa) {
		for (auto a_doua_echipa = prima_echipa + 1; a_doua_echipa < teams.size(); ++a_doua_echipa) {
				matches.push_back(Match(teams[prima_echipa], teams[a_doua_echipa]));
		}
	}

}

void League::simulate_league(bool visual) {
	for (auto it : matches) {
		std::pair<std::string, std::string> temp;
		if(visual)
			temp = it.simulate_match(true);
		else
			temp = it.simulate_match(false);
		if (temp.first == "0" && temp.second != "0") {
			clasament[temp.second] += 3;
		}
		else if (temp.first != "0" && temp.second == "0") {
			clasament[temp.first] += 3; 
		}
		else {
			clasament[temp.second] += 1; 
			clasament[temp.first] += 1; 
		}
	}
}

void League::display_league() {
	std::vector<std::pair<std::string, int>> arr_clasament;

	// Adaug numele echipelor si punctele lor
	for (auto team_names : teams) {
		arr_clasament.push_back( {team_names.get_team_name(), clasament[team_names.get_team_name()]} );
	}

	// Sortez echipele dupa nr-ul de puncte
	for (auto it = 0; it < arr_clasament.size() - 1; ++it) {
		for (auto i = it + 1; i < arr_clasament.size(); ++i) {
			if (arr_clasament[it].second < arr_clasament[i].second) std::swap(arr_clasament[it], arr_clasament[i]);
		}
	}

	system("cls");
	std::cout << "------------------ [SUPERLIGA] ------------------\n";
	for (auto it = 0; it < arr_clasament.size(); ++it) {
		if (it < 9) {
			std::cout << "|  " << it + 1 << " | " << arr_clasament[it].first;
		}
		else
			std::cout << "| " << it + 1 << " | " << arr_clasament[it].first;
		for (auto i = 0; i < 36 - arr_clasament[it].first.size(); ++i) std::cout << " ";
		if(arr_clasament[it].second < 10)
			std::cout << "|  " << arr_clasament[it].second << " |\n";
		else
			std::cout << "| " << arr_clasament[it].second << " |\n";

		for (auto i = 0; i < 49; ++i) std::cout << "-";
		std::cout << "\n";
	}
}


