#pragma once

class Enemy {
private:

    int _HP = 100;
    int _armor = 100;
    char _enemy = 'E';
    int _Ex = 2;
    int _Ey = 21;
    int _key = 0;
public:
    void set_key(int key) {
        _key = key;
    }
    int get_HP() {
        return _HP;
    }
    int get_armor() {
        return _armor;
    }
    void set_HP(int HP) {
        _HP = HP;
    }
    void set_armor(int armor) {
        _armor = armor;
    }
    int get_enemy_x() {
        return _Ex;
    }
    int get_enemy_y() {
        return _Ey;
    }
    void move() {
        switch (_key) {
        case 1:
            _Ex--;
            if (_Ex < 0) {
                _Ex++;
            }
            break;
        case 2:
            _Ey--;
            if (_Ey < 0) {
                _Ey++;
            }
            break;
        case 3:
            _Ex++;
            if (_Ex > 16) {
                _Ex--;
            }
            break;
        case 4:
            _Ey++;
            if (_Ey > 40) {
                _Ey--;
            }
            break;
        }
    }
};