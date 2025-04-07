#pragma once
#include <windows.h>

class Weapon
{
public:
    int get_player_max_bullets() {
        return _player_max_bullets;
    }
    void set_player_bullets(int bullets) {
        _player_bullets = bullets;
    }
    int get_enemy_max_bullets() {
        return _enemy_max_bullets;
    }
    void set_enemy_bullets(int bullets) {
        _enemy_bullets = bullets;
    }
    int get_player_bullets() {
        return _player_bullets;
    }
    int get_enemy_bullets() {
        return _enemy_bullets;
    }
    int player_shoot(int player_y, int enemy_y, int enemy_HP) {
        _player_bullets -= 1;
        if (player_y == enemy_y) {
            enemy_HP -= _damage;
            return enemy_HP;
        }
    }
    int enemy_shoot(int player_y, int enemy_y, int player_HP) {
        if (player_y == enemy_y) {
            _enemy_shoot++;
            if (_enemy_shoot == 3) {
                Sleep(2000);
                _enemy_bullets--;
                player_HP -= _damage;
                _enemy_shoot -= 3;
                return player_HP;
            }
            else {
                return player_HP;
            }
        }
        else {
            return player_HP;
        }
    }
private:
    int _player_max_bullets = 20;
    int _player_bullets = 20;
    int _enemy_max_bullets = 20;
    int _enemy_bullets = 20;
    int _damage = 5;
    int _reload_spead = 5000;
    int _enemy_shoot = 0;
};