#pragma once

class warrior {
private:
    int hp, pwr;
    string name;

public:
    warrior(int h, int p, std::string n);

    int get_hp() {
        return hp;
    }
    int get_pwr() {
        return pwr;
    }
    std::string get_name() {
        return name;
    }
    friend class loot_box;
};

class boss {
private:
    int hp, pwr;
    string name;

public:
    boss(int h, int p, std::string n);

    int get_hp() {
        return hp;
    }
    int get_pwr() {
        return pwr;
    }
    std::string get_name() {
        return name;
    }
    friend class loot_box;
};



class loot_box {
public:

    int do_this(int Php);
    int do_this2(int Pdmg);
    friend class warrior;
};


class dungeon_maps {
private:
    std::string player, boss, enemy1, enemy2,enmey3;
public:
    vector<vector<string>> dungeon1(string player, string enemy1, string enemy2, string enemy3);
    vector<vector<string>> dungeon2(string player, string enemy1, string enemy2, string enemy3);
    vector<vector<string>> dungeon3(string player, string enemy1, string enemy2, string enemy3);
    vector<vector<string>> dungeon4(string player, string enemy1, string enemy2, string enemy3);
    vector<vector<string>> dungeon5(string player, string boss);
};