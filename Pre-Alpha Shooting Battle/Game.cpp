#pragma once
#include <iostream>
using namespace std;

class Game {
public:
    void create_map(int enemy_x, int enemy_y, int player_x, int player_y) {
        for (int j = 0; j < 84; j++) {
            cout << " ";
        }
        for (int j = 0; j < 42; j++) {
            cout << "*";
        }
        cout << endl;
        for (int i = 0; i < enemy_x - 1; i++) {
            for (int j = 0; j < 84; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j = 0; j < 40; j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 84; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j = 0; j < enemy_y; j++) {
                cout << " ";
            }
            cout << "E";
            for (int j = 0; j < 40 - enemy_y - 1; j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for (int i = 0; i < player_x - enemy_x; i++) {
            for (int j = 0; j < 84; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j = 0; j < 40; j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 84; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j = 0; j < player_y; j++) {
                cout << " ";
            }
            cout << "P";
            for (int j = 0; j < 40 - player_y - 1; j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for (int i = 0; i < 16 - player_x; i++) {
            for (int j = 0; j < 84; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j = 0; j < 40; j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for (int j = 0; j < 84; j++) {
            cout << " ";
        }
        for (int j = 0; j < 42; j++) {
            cout << "*";
        }

    }
    void stats(int HP_player, int HP_enemy, int armor_player, int armor_enemy, int player_bullets, int player_max_bullets, int enemy_bullets, int enemy_max_bullets) {
        if (HP_player < 100) {
            cout << "HP Player: " << HP_player << "                                                                                                                                                                                       " << "HP Enemy: " << HP_enemy << endl;
        }
        else {
            cout << "HP Player: " << HP_player << "                                                                                                                                                                                      " << "HP Enemy: " << HP_enemy << endl;
        }
        if (armor_player < 100) {
            cout << "Armor Player: " << armor_player << "                                                                                                                                                                                 " << "Armor Enemy: " << armor_enemy << endl;
        }
        else {
            cout << "Armor Player: " << armor_player << "                                                                                                                                                                                " << "Armor Enemy: " << armor_enemy << endl;
        }
        if (player_bullets < 10) {
            cout << "Player Bullets: " << player_bullets << "/" << player_max_bullets << "                                                                                                                                                                         " << "Enemy Bullets: " << enemy_bullets << "/" << enemy_max_bullets << endl;
        }
        else {
            cout << "Player Bullets: " << player_bullets << "/" << player_max_bullets << "                                                                                                                                                                        " << "Enemy Bullets: " << enemy_bullets << "/" << enemy_max_bullets << endl;
        }
    }
};