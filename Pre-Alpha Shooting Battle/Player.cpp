#pragma once

class Player {
private:
    int _HP = 100;
    int _armor = 100;
    char _player = 'P';
    int _Px = 14;
    int _Py = 20;
public:
    void set_HP(int HP) {
        _HP = HP;
    }
    int get_HP() {
        return _HP;
    }
    int get_armor() {
        return _armor;
    }
    int get_player_x() {
        return _Px;
    }
    int get_player_y() {
        return _Py;
    }
    void move(int key) {
        switch (key) {
        case 1:
            _Px--;
            break;
        case 2:
            _Py--;
            break;
        case 3:
            _Px++;
            break;
        case 4:
            _Py++;
            break;
        }
    }
};