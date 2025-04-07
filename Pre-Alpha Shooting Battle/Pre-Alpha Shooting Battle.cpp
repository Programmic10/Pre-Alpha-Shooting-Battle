#include <iostream>
#include <windows.h>
#include "Game.cpp"
#include "Player.cpp"
#include "Enemy.cpp"
#include "Weapon.cpp"
using namespace std;

#define IDI_ICON2                       

int main()
{
    system("title Pre-Alpha Shooting Battle");
    srand(time(NULL));
    Game g;
    Player P;
    Enemy E;
    Weapon W;
    while (true) {
        int key = rand() % 4;
        g.stats(P.get_HP(), E.get_HP(), P.get_armor(), E.get_armor(), W.get_player_bullets(), W.get_player_max_bullets(), W.get_enemy_bullets(), W.get_enemy_max_bullets());
        g.create_map(E.get_enemy_x(), E.get_enemy_y(), P.get_player_x(), P.get_player_y());
        SHORT key_space = GetKeyState(VK_SPACE);
        if (key_space & 0x8000) {
            E.set_HP(W.player_shoot(P.get_player_y(), E.get_enemy_y(), E.get_HP()));
        }
        if (GetKeyState('W') & 0x8000) {
            P.move(1);
        }
        if (GetKeyState('A') & 0x8000) {
            P.move(2);
        }
        if (GetKeyState('S') & 0x8000) {
            P.move(3);
        }
        if (GetKeyState('D') & 0x8000) {
            P.move(4);
        }
        E.set_key(key);
        E.move();
        P.set_HP(W.enemy_shoot(P.get_player_y(), E.get_enemy_y(), P.get_HP()));
        Sleep(1500);
        system("cls");
    }
}
