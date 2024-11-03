#pragma once
#include "League.h"

void starting_interface () {
    int max = 0, it = 1;
    std::cout << "\n";
    while (max != 40) {
        system("cls");
        std::cout << "              STARTING SIMULATION\n";
        std::cout << "-----------------------------------------";
        std::cout << "\n";
        std::cout << "|";
        for (int j = 0; j < it - 1; j++) {
            std::cout << char(35);
        }

        for (int j = 0; j < 39 - max; j++)
            std::cout << " ";

        std::cout << "|";
        std::cout << "\n";
        std::cout << "-----------------------------------------";
        max++;
        it++;
        Sleep(25);
    }
}