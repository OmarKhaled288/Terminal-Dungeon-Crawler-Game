#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime>
#include<fstream>
#include<algorithm>
#include <sstream>
#ifdef __cplusplus__
#include <cstdlib>
#else
#include <stdlib.h>
#endif
using namespace std;
#include"Header.h"

//calling of constructors from the classes
warrior::warrior(int h, int p, string n) {
    hp = h;
    pwr = p;
    name = n;
}
boss::boss(int h, int p, string n) {
    hp = h;
    pwr = p;
    name = n;
}

// fucntion made to take away plaeyrs health (Php) by the emey attack damage (Edmg)
int takedmg(int Php, int Edmg) {
    Php = Php - Edmg;
    return Php;
}

loot_box lb; // object to be used in calling in the 2 main fucntions

// fucntion to return a random number
int enemyrand(int min, int max) {
    return rand() % max + min;
}
// the loot box function for increasing healht by a random amount from a predertmined array
int loot_box::do_this(int Php) {

    int range[] = {5,5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,15,15,15,20,20,30};
    srand(time(0));
    int x = range[enemyrand(0, sizeof(range) / sizeof(range[0]))];
    return x;
}
// the loot box function for increasing damage by a random amount from a predertmined array
int loot_box::do_this2(int Pdmg) {

    int range[] = {5,5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,15,15,15,20,20,30};
    srand(time(0));
    int x = range[enemyrand(0, sizeof(range) / sizeof(range[0]))];
    return x;
}

//maps decleration as a vector of vectors

vector<vector<string>> dungeon_maps::dungeon1(string player, string enemy1, string enemy2, string enemy3) {
    vector<vector<string>> dungeon = { {"1","=","=","=","=","=","=","=","=","="},
                                    {">",player," "," "," "," "," ",enemy3," ","|"},
                                    {"|","#","#"," ","#"," "," "," "," ","|"},
                                    {"|"," "," "," ","$"," "," "," "," ","|"},
                                    {"|",enemy2," "," "," "," ","#"," "," ","|"},
                                    {"|"," "," ",enemy1," "," "," "," "," ","|"},
                                    {"|"," ","#"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," ","#"," "," ","|"},
                                    {"|"," ","#"," ","#"," "," "," "," ","==>"},
                                    {"=","=","=","=","=","=","=","=","=","="} };

    return dungeon;
}
vector<vector<string>>dungeon_maps::dungeon2(string player, string enemy1, string enemy2, string enemy3) {
    vector<vector<string>> dungeon = { {"2","=","=","=","=","=","=","=","=","="},
                                    {">",player," "," "," ",enemy2," "," "," ","|"},
                                    {"|"," ","#"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," ","$"," "," "," "," ","|"},
                                    {"|"," "," "," "," "," ","#"," "," ","|"},
                                    {"|"," "," "," "," "," "," "," "," ","|"},
                                    {"|"," ","#"," "," "," "," ",enemy1," ","|"},
                                    {"|"," ",enemy3," "," "," ","#"," "," ","|"},
                                    {"|"," ","#"," ","#"," "," "," "," ","==>"},
                                    {"=","=","=","=","=","=","=","=","=","="} };

    return dungeon;
}

vector<vector<string>> dungeon_maps::dungeon3(string player, string enemy1, string enemy2, string enemy3) {
    vector<vector<string>> dungeon = { {"3","=","=","=","=","=","=","=","=","="},
                                    {">",player," "," "," "," ",enemy3," "," ","|"},
                                    {"|"," ","#"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," ","$"," "," "," ","#","|"},
                                    {"|"," "," "," ","#","#","#"," "," ","|"},
                                    {"|"," ",enemy2,"#"," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," "," ",enemy1,"$","|"},
                                    {"|"," ","#"," "," "," ","#"," "," ","|"},
                                    {"|"," ","#"," ","#"," "," "," "," ","==>"},
                                    {"=","=","=","=","=","=","=","=","=","="} };

    return dungeon;
}

vector<vector<string>>dungeon_maps::dungeon4(string player, string enemy1, string enemy2, string enemy3) {
    vector<vector<string>> dungeon = { {"4","=","=","=","=","=","=","=","=","=","=","=","=","=","="},
                                    {">",player," ",enemy3," "," "," "," "," "," "," "," "," "," ","|"},
                                    {"|","$"," "," "," "," "," "," "," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," "," "," "," "," "," "," ","#"," ","|"},
                                    {"|"," "," "," "," "," "," "," "," "," "," "," ","#","$","|"},
                                    {"|"," "," "," "," "," "," ","#",enemy2," "," "," ","#"," ","|"},
                                    {"|"," "," "," "," "," "," "," "," "," ","#"," "," "," ","|"},
                                    {"|"," ","#"," "," "," "," "," "," "," "," "," "," "," ","|"},
                                    {"|"," "," "," ","$"," "," "," "," "," ","#"," "," "," ","|"},
                                    {"|"," "," "," "," "," ","#"," "," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," "," "," ","#"," "," "," "," "," ","|"},
                                    {"|"," ","#"," "," "," "," ",enemy1," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," ","#"," "," "," "," ","#"," "," ","|"},
                                    {"|"," ","#"," ","#"," "," "," "," "," "," ","#","$"," ","==>"},
                                    {"=","=","=","=","=","=","=","=","=","=","=","=","=","=","="} };

    return dungeon;
}

vector<vector<string>>dungeon_maps::dungeon5(string player, string boss) {
    vector<vector<string>> dungeon = { {"5","=","=","=","=","=","=","="},
                                    {">",player," "," "," "," ","$","|"},
                                    {"|"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," "," "," ","|"},
                                    {"|"," "," "," "," ",boss," ","|"},
                                    {"|"," "," "," "," "," "," ","|"},
                                    {"|","$"," "," "," "," ","$","|"},
                                    {"=","=","=","=","=","=","=","="} };

    return dungeon;
}

// inputs exceptions
string input_check(string R) {
    if (R != "a" && R != "w" && R != "s" && R != "d"&& R != "x"&& R != "q") {
        if (R != "A" && R != "W" && R != "S" && R != "D"&& R != "X"&& R != "Q"){
        throw "invalid input!!!";
        }
    }
    return (R);
}

// main boss has its own fucntion for the path finding algorithm
// takes many variables some of which are set in the int main () from the classes
// takes a map, score variable , player health, damage and name, Boss damage , health and name (name ie symbol on map)

void bossfloor(vector<vector<string>>d1, int& score, int& Php, int& Pdmg, int Bhp, int Bdmg, string player, string boss, int& victory) {
    int x = 0, y = 0, h = 0, g = 0;// coordinates used for moving around the map (x,y) for player , (g,h) for boss
    string in; // player input, moving wia W A S D keys
    // main game loop
    while (true) {
        if (victory == 0)// victory variable to check if the player won or lost depending on the health of the player or the boss
        {
            break;
        }
        //if (system("CLS")) system("clear"); // to clear the screen after each move

        for (int i = 0; i < d1.size(); i++)
        {       // printing the map and searching it for the coordinates of the player and the boss
            for (int j = 0; j < d1[i].size(); j++)
            {
                if (d1[i][j] == player) { // storing coordinates of the player
                    x = i;
                    y = j;
                }
                if (d1[i][j] == boss) { // storing the coordinates of the boss
                    g = i;
                    h = j;
                }
                if (j == d1[i].size() - 1) {
                    cout << " " << d1[i][j] << endl;
                }
                else {
                    cout << " " << d1[i][j] << " ";
                }
            }
        }
        // prompts for the player to know their health points, and damage ,the boss stats and score
        cout << "PHP: " << Php << "   " << "PDMG: " << Pdmg << endl;
        cout << "BHP: " << Bhp << "   " << "BDMG: " << Bdmg << endl;
        cout << "Score: " << score << endl;
        cout << "Enter your move: " << endl;
        cin >> in;
        string F;
	//input exception
        try {
            F = input_check(in);
        }
        catch (const char* msg) {
            cerr << msg << endl;
		    continue;
        }
        if (in == "w"||in == "W") {
            if (d1[x - 1][y] == "=") { // to make sure the player doesnt go outside the map
                d1[x][y] = player;
            }
            else if (d1[x - 1][y] == "$") {
                d1[x - 1][y] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x - 1][y] == boss) { 
                // when player and boss collide in the same tile, each takes a set amout of damage depending on the others output
                d1[x][y] = player;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    // to check if player's heal;th hits 0 he loses
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                // if the boss' health is 0 that means the player won
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
                continue;
            }

            else {
                d1[x - 1][y] = player;
                d1[x][y] = " ";
            }
        }
        //  THE ABOVE FUNcTION IS REPEATED FOR EACH INPUT W, A , S, D   

        else if (in == "s"||in == "S") {
            if (d1[x + 1][y] == "=") {
                d1[x][y] = player;
            }
            else if (d1[x + 1][y] == "$") {
                d1[x + 1][y] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x + 1][y] == boss) {
                d1[x][y] = player;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
                continue;
            }

            else {
                d1[x + 1][y] = player;
                d1[x][y] = " ";
            }
        }
        else if (in == "a"||in == "A") {
            if (d1[x][y - 1] == "|") {
                d1[x][y] = player;
            }
            else if (d1[x][y - 1] == ">") {
                d1[x][y] = player;
            }
            else if (d1[x][y- 1] == "$") {
                d1[x][y- 1] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x][y - 1] == boss) {
                d1[x][y] = player;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
                continue;
            }

            else {
                d1[x][y - 1] = player;
                d1[x][y] = " ";
            }
        }
        else if (in == "d"||in == "D") {
            if (d1[x][y + 1] == "|") {
                d1[x][y] = player;
            }
            else if (d1[x][y+1] == "$") {
                d1[x][y+1] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x][y + 1] == boss) {
                d1[x][y] = player;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
                continue;
            }

            else {
                d1[x][y + 1] = player;
                d1[x][y] = " ";
            }
        }
        else if(in=="x"||in=="X"){

        }
        else if(in=="q"||in=="Q"){
            break;
        }
        // the folowong code for the boss to chase the player around the map
        // it checks for the players coordinates and incremeants the boss's location 1 tile closer, first on y axis then x axis
        //untill the boss collides with the player and one of them dies!
        if (x > g) {
            if (d1[g + 1][h] == player) {
                d1[g][h] = boss;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
            }
            else {
                d1[g + 1][h] = boss;
                d1[g][h] = " ";
            }
        }
        else if (x < g) {
            if (d1[g - 1][h] == player) {
                d1[g][h] = boss;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
            }
            else {
                d1[g - 1][h] = boss;
                d1[g][h] = " ";
            }
        }
        else if (y > h) {
            if (d1[g][h + 1] == player) {
                d1[g][h] = boss;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
            }
            else {
                d1[g][h + 1] = boss;
                d1[g][h] = " ";
            }
        }
        else if (y < h) {
            if (d1[g][h - 1] == player) {
                d1[g][h] = boss;
                Php = takedmg(Php, Bdmg);
                Bhp = takedmg(Bhp, Pdmg);
                if (Php <= 0) {
                    cout << "PHP: " << Php << endl;
                    cout << "You Lose!" << endl;
                    cout <<"score: "<<score<<endl;
                    victory = 0;
                    break;
                }
                else if (Bhp <= 0) {
                    score += 100;
                    break;
                }
            }
            else {
                d1[g][h - 1] = boss;
                d1[g][h] = " ";
            }
        }
    }
}


// main fucntion for all non-boss levels, ie levels 1-4
// takes nearly the same input instead of boss stats it takes 3 enemies stats
// player input and map printing and traversal is the same as the boss function
//only difference is that the enemy movements are random instead of chasing after the player

void dungeonTravirsal(vector<vector<string>>d1, int& score, int& Php, int& Pdmg, int E1hp, int E1dmg, int E2hp, int E2dmg, int E3hp, int E3dmg, string player, string enemy1, string enemy2, string enemy3, int& victory) {
    int rand1 = 0, rand2 = 0, rand3 = 0, x = 0, y = 0, h = 0, g = 0, a = 0, b = 0, m = 0, n = 0;;
    string in;
    while (true) {
        if (victory == 0) {
            break;
        }
        //if (system("CLS")) system("clear");
        for (int i = 0; i < d1.size(); i++)
        {
            for (int j = 0; j < d1[i].size(); j++)
            {
                if (d1[i][j] == player) {
                    x = i;
                    y = j;
                }
                if (d1[i][j] == enemy1) {
                    g = i;
                    h = j;
                }
                if (d1[i][j] == enemy2) {
                    a = i;
                    b = j;
                }
                if (d1[i][j] == enemy3) {
                    m = i;
                    n = j;
                }
                if (j == d1[i].size() - 1) {
                    cout << " " << d1[i][j] << endl;
                }
                else {
                    cout << " " << d1[i][j] << " ";
                }
            }
        }
	//prints the health and dmg of the player and enemies
	//if an enemy dies it doesn't print its stats
        cout << "PHP: " << Php << "   " << "PDMG: " << Pdmg << endl;
        if (g && h != 0) {
            cout << "E1HP: " << E1hp << "   " << "E1DMG: " << E1dmg << endl;
        }
        if (a && b != 0) {
            cout << "E2HP: " << E2hp << "   " << "E2DMG: " << E2dmg << endl;
        }
        if (m && n != 0) {
            cout << "E3HP: " << E3hp << "   " << "E3DMG: " << E3dmg << endl;
        }
	//prints the score
        cout << "Score: " << score << endl;
	//takes input from the player
        cout << "Enter your move: " << endl;
        cin >> in;
        string F;
	//input exception
        try {
            F = input_check(in);
        }
        catch (const char* msg) {
            cerr << msg << endl;
		    continue;
        }
	//gets a random number between 0 and 3 to take as input for the enemies
        srand(time(0));
        rand1 = enemyrand(0, 4);
        srand(time(0));
        rand2 = enemyrand(0, 4);
        srand(time(0));
        rand3 = enemyrand(0, 4);
	//checks if the enemies are dead and changes their name to blank
        if (g && h == 0) {
            enemy1 = " ";
            E1dmg = 0;
        }
        if (a && b == 0) {
            enemy1 = " ";
            E2dmg = 0;
        }
        if (m && n == 0) {
            enemy1 = " ";
            E3dmg = 0;
        }
	//player movment same as the boss function except it has few exceptions like the cactus "#" and the fallen enemies " "
	//is the same for wasd
        if (in == "w"||in=="W") {
            if (d1[x - 1][y] == "=") {
                d1[x][y] = player;
            }
            else if (d1[x - 1][y] == "#") {
                d1[x][y] = player;
                Php--;
            }
            else if (d1[x - 1][y] == " ") {
                d1[x - 1][y] = player;
                d1[x][y] = " ";
            }
            else if (d1[x - 1][y] == "$") {
                d1[x - 1][y] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x - 1][y] == enemy1) {
                d1[x][y] = player;
                d1[g][h] = enemy1;
                Php = takedmg(Php, E1dmg);
                E1hp = takedmg(E1hp, Pdmg);
                if (E1hp <= 0) {
                    d1[x - 1][y] = player;
                    d1[x][y] = " ";
                    g = h = 0;
                    score += 5;
                }
                
            }
            else if (d1[x - 1][y] == enemy2) {
                d1[x][y] = player;
                d1[a][b] = enemy2;
                Php = takedmg(Php, E2dmg);
                E2hp = takedmg(E2hp, Pdmg);
                if (E2hp <= 0) {
                    d1[x - 1][y] = player;
                    d1[x][y] = " ";
                    a = b = 0;
                    score += 5;
                }
                
            }
            else if (d1[x - 1][y] == enemy3) {
                d1[x][y] = player;
                d1[m][n] = enemy3;
                Php = takedmg(Php, E3dmg);
                E3hp = takedmg(E3hp, Pdmg);
                if (E3hp <= 0) {
                    d1[x - 1][y] = player;
                    d1[x][y] = " ";
                    m = n = 0;
                    score += 5;
                }
            }
            else {
                d1[x - 1][y] = player;
                d1[x][y] = " ";
            }
        }
        else if (in == "s"||in == "S") {
            if (d1[x + 1][y] == "=") {
                d1[x][y] = player;
            }
            else if (d1[x + 1][y] == "#") {
                d1[x][y] = player;
                Php--;
            }
            else if (d1[x + 1][y] == " ") {
                d1[x + 1][y] = player;
                d1[x][y] = " ";
            }
            else if (d1[x + 1][y] == "$") {
                d1[x + 1][y] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x + 1][y] == enemy1) {
                d1[x][y] = player;
                d1[g][h] = enemy1;
                Php = takedmg(Php, E1dmg);
                E1hp = takedmg(E1hp, Pdmg);
                if (E1hp <= 0) {
                    d1[x + 1][y] = player;
                    d1[x][y] = " ";
                    g = h = 0;
                    score += 5;
                }
                
            }
            else if (d1[x + 1][y] == enemy2) {
                d1[x][y] = player;
                d1[a][b] = enemy2;
                Php = takedmg(Php, E2dmg);
                E2hp = takedmg(E2hp, Pdmg);
                if (E2hp <= 0) {
                    d1[x + 1][y] = player;
                    d1[x][y] = " ";
                    a = b = 0;
                    score += 5;
                }
                
            }
            else if (d1[x + 1][y] == enemy3) {
                d1[x][y] = player;
                d1[m][n] = enemy3;
                Php = takedmg(Php, E3dmg);
                E3hp = takedmg(E3hp, Pdmg);
                if (E3hp <= 0) {
                    d1[x + 1][y] = player;
                    d1[x][y] = " ";
                    m = n = 0;
                    score += 5;
                }
                
            }
            else {
                d1[x + 1][y] = player;
                d1[x][y] = " ";
            }
        }

        else if (in == "a"||in == "A") {
            if (d1[x][y - 1] == "|") {
                d1[x][y] = player;
            }
            else if (d1[x][y - 1] == ">") {
                d1[x][y] = player;
            }
            else if (d1[x][y - 1] == "#") {
                d1[x][y] = player;
                Php--;
            }
            else if (d1[x][y - 1] == " ") {
                d1[x][y - 1] = player;
                d1[x][y] = " ";
            }
            else if (d1[x][y - 1] == "$") {
                d1[x][y - 1] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            // killing normal enemies gives +5 points while the boss +100 points
            else if (d1[x][y - 1] == enemy1) {
                d1[x][y] = player;
                d1[g][h] = enemy1;
                Php = takedmg(Php, E1dmg);
                E1hp = takedmg(E1hp, Pdmg);
                if (E1hp <= 0) {
                    d1[x][y - 1] = player;
                    d1[x][y] = " ";
                    g = h = 0;
                    score += 5;
                }
                
            }
            else if (d1[x][y - 1] == enemy2) {
                d1[x][y] = player;
                d1[a][b] = enemy2;
                Php = takedmg(Php, E2dmg);
                E2hp = takedmg(E2hp, Pdmg);
                if (E2hp <= 0) {
                    d1[x][y - 1] = player;
                    d1[x][y] = " ";
                    a = b = 0;
                    score += 5;
                }
            }
            else if (d1[x][y - 1] == enemy3) {
                d1[x][y] = player;
                d1[m][n] = enemy3;
                Php = takedmg(Php, E3dmg);
                E3hp = takedmg(E3hp, Pdmg);
                if (E3hp <= 0) {
                    d1[x][y - 1] = player;
                    d1[x][y] = " ";
                    m = n = 0;
                    score += 5;
                }
                
            }
            else {
                d1[x][y - 1] = player;
                d1[x][y] = " ";
            }
        }
        else if (in == "d"||in == "D") {
		// checks if the player gots to the "==>" tile he progrtesses to the next map
            if (d1[x][y + 1] == "==>") {
                break;
            }
            if (d1[x][y + 1] == "|") {
                d1[x][y] = player;
            }
            // if the player hits the cactus "#" he loses 1 hp
            else if (d1[x][y + 1] == "#") {
                d1[x][y] = player;
                Php--;
            }
            else if (d1[x][y + 1] == " ") {
                d1[x][y + 1] = player;
                d1[x][y] = " ";
            }
            // checks if the player hits the "$" tile to take the loot box and increase the score by 1
            else if (d1[x][y + 1] == "$") {
                d1[x][y + 1] = player;
                d1[x][y] = " ";
                Php = Php + lb.do_this(Php);
                Pdmg = Pdmg + lb.do_this2(Pdmg);
                score++;
            }
            else if (d1[x][y + 1] == enemy1) {
                d1[x][y] = player;
                d1[g][h] = enemy1;
                Php = takedmg(Php, E1dmg);
                E1hp = takedmg(E1hp, Pdmg);
                if (E1hp <= 0) {
                    d1[x][y + 1] = player;
                    d1[x][y] = " ";
                    g = h = 0;
                    score += 5;
                }
            }
            else if (d1[x][y + 1] == enemy2) {
                d1[x][y] = player;
                d1[a][b] = enemy2;
                Php = takedmg(Php, E2dmg);
                E2hp = takedmg(E2hp, Pdmg);
                if (E2hp <= 0) {
                    d1[x][y + 1] = player;
                    d1[x][y] = " ";
                    a = b = 0;
                    score += 5;
                }
            }
            else if (d1[x][y + 1] == enemy3) {
                d1[x][y] = player;
                d1[m][n] = enemy3;
                Php = takedmg(Php, E3dmg);
                E3hp = takedmg(E3hp, Pdmg);
                if (E3hp <= 0) {
                    d1[x][y + 1] = player;
                    d1[x][y] = " ";
                    m = n = 0;
                    score += 5;
                }
            }
            else {
                d1[x][y + 1] = player;
                d1[x][y] = " ";
            }
        }
        else if(in=="q"||in=="Q"){
            victory = 0;
            break;
        }
	//enemy ai where it takes a random number between 0 and 3 and decides the direction to go based on that
        if (g && h != 0) {
            if (rand1 == 0) {
                if (d1[g - 1][h] == "=" || d1[g - 1][h] == "#" || d1[g - 1][h] == player || d1[g - 1][h] == enemy2 || d1[g - 1][h] == enemy3) {
                    d1[g][h] = enemy1;
                }
                else {
                    d1[g - 1][h] = enemy1;
                    d1[g][h] = " ";
                }
            }
            else if (rand1 == 1) {
                if (d1[g + 1][h] == "=" || d1[g + 1][h] == "#" || d1[g + 1][h] == player || d1[g + 1][h] == enemy2 || d1[g + 1][h] == enemy3) {
                    d1[g][h] = enemy1;
                }
                else {
                    d1[g + 1][h] = enemy1;
                    d1[g][h] = " ";
                }
            }
            else if (rand1 == 2) {
                if (d1[g][h - 1] == "|" || d1[g][h - 1] == "#" || d1[g][h - 1] == player || d1[g][h - 1] == enemy2 || d1[g][h - 1] == enemy3) {
                    d1[g][h] = enemy1;
                }
                else {
                    d1[g][h - 1] = enemy1;
                    d1[g][h] = " ";
                }
            }
            else if (rand1 == 3) {
                if (d1[g][h + 1] == "|" || d1[g][h + 1] == "#" || d1[g][h + 1] == "==>" || d1[g][h + 1] == player || d1[g][h + 1] == enemy2 || d1[g][h + 1] == enemy3) {
                    d1[g][h] = enemy1;
                }
                else {
                    d1[g][h + 1] = enemy1;
                    d1[g][h] = " ";
                }
            }
        }
        if (a && b != 0) {
            if (rand2 == 0) {
                if (d1[a - 1][b] == "=" || d1[a - 1][b] == "#" || d1[a - 1][b] == enemy1 || d1[a - 1][b] == enemy3 || d1[a - 1][b] == player) {
                    d1[a][b] = enemy2;
                }
                else {
                    d1[a - 1][b] = enemy2;
                    d1[a][b] = " ";
                }
            }
            else if (rand2 == 1) {
                if (d1[a + 1][b] == "=" || d1[a + 1][b] == "#" || d1[a + 1][b] == enemy1 || d1[a + 1][b] == enemy3 || d1[a + 1][b] == player) {
                    d1[a][b] = enemy2;
                }
                else {
                    d1[a + 1][b] = enemy2;
                    d1[a][b] = " ";
                }
            }
            else if (rand2 == 2) {
                if (d1[a][b - 1] == "|" || d1[a][b - 1] == "#" || d1[a][b - 1] == enemy1 || d1[a][b - 1] == enemy3 || d1[a][b - 1] == player) {
                    d1[a][b] = enemy2;
                }
                else {
                    d1[a][b - 1] = enemy2;
                    d1[a][b] = " ";
                }
            }
            else if (rand2 == 3) {
                if (d1[a][b + 1] == "|" || d1[a][b + 1] == "#" || d1[a][b + 1] == enemy1 || d1[a][b + 1] == enemy3 || d1[a][b + 1] == "==>" || d1[a][b + 1] == player) {
                    d1[a][b] = enemy2;
                }
                else {
                    d1[a][b + 1] = enemy2;
                    d1[a][b] = " ";
                }
            }
        }

        if (m && n != 0) {
            if (rand3 == 0) {
                if (d1[m - 1][n] == "=" || d1[m - 1][n] == "#" || d1[m - 1][n] == player || d1[m - 1][n] == enemy1 || d1[m - 1][n] == enemy2) {
                    d1[m][n] = enemy3;
                }
                else {
                    d1[m - 1][n] = enemy3;
                    d1[m][n] = " ";
                }
            }

            else if (rand3 == 1) {
                if (d1[m + 1][n] == "=" || d1[m + 1][n] == "#" || d1[m + 1][n] == player || d1[m + 1][n] == enemy1 || d1[m + 1][n] == enemy2) {
                    d1[m][n] = enemy3;
                }
                else {
                    d1[m + 1][n] = enemy3;
                    d1[m][n] = " ";
                }
            }

            else if (rand3 == 2) {
                if (d1[m][n - 1] == "|" || d1[m][n - 1] == "#" || d1[m][n - 1] == player || d1[m][n - 1] == enemy1 || d1[m][n - 1] == enemy2) {
                    d1[m][n] = enemy3;
                }
                else {
                    d1[m][n - 1] = enemy3;
                    d1[m][n] = " ";
                }
            }

            else if (rand1 == 3) {
                if (d1[m][n + 1] == "|" || d1[m][n + 1] == "#" || d1[m][n + 1] == "==>" || d1[m][n + 1] == player || d1[m][n + 1] == enemy1 || d1[m][n + 1] == enemy2) {
                    d1[m][n] = enemy3;
                }
                else {
                    d1[m][n + 1] = enemy3;
                    d1[m][n] = " ";
                }
            }
        }
	//to check if the player died from the cactus
        if (Php <= 0) {
            cout << "PHP: " << Php << endl;
            cout << "You Lose!" << endl;
            cout << "Score: "<<score<<endl;
            victory = 0;
            break;
        }
    }
}

// input exception
int choice_check(int a) {
    if (a > 3 || a <= 0) {
        throw "invalid choice!!!";
    }
    return (a);
}
int mainmenucheck(int a) {
    if (a > 6 || a <= 0) {
        throw "invalid choice!!!";
    }
    return (a);
}

int main() {
    // objects from the warrior class as the 3 options presented to the player
    warrior Assassin(10, 20, "A");
    warrior Juggernaut(15, 15, "J");
    warrior Tank(20, 10, "T");
    // object from the boss class
    boss Boss(100, 100, "B");
    boss e1(5, 5, "a");
    boss e2(6, 7, "b");
    boss e3(3, 3, "c");
    // object used to call the maps in the main fucntion
    dungeon_maps d;
    int vic = 1, score = 0, L = 0, choice = 0, n;
    // vectors sued to exctract the high score from the score file
    vector<string> names;
    vector<string> character;
    vector<int> nums;
    string word, var, choice1, dumvar, name, tryagain, warriorchoice, s;
    ofstream fout;
    ifstream fin;

    while (true) {
        if (vic == 0) {
            break;
        }

        //if (system("CLS")) system("clear");

        cout<<endl << "Welcome to our game!!!" << endl << "1- Play game"<<endl << "2- View controls" << endl << "3- View entire score board" << endl << "4- View highest score" << endl << "5- Credit" << endl << "6- Quit game" << endl;
        cin >> var;
        // using the convert so we can avoid false input between the int and string types which would the cause the program to loop infintly
        stringstream convert(var);
        int x = 0;
        convert >> x;

        try {
                L = mainmenucheck(x);
            }
            catch (const char* msg) {
                cerr << msg << endl;
                continue;
            }

        if (x == 4) {
		// prints the name and score of the person who has the highest score in the file
            //if (system("CLS")) system("clear");
            fin.open("scores.txt");
            fout.open("scores.txt", ios::app);
            names.clear();
            nums.clear();
            while (!fin.fail()) {
                fin >> word >> n>>s;
                // adds the players names ans cores to 2 vectors
                nums.push_back(n);
                names.push_back(word);
                character.push_back(s);
            }
            // find the winner using the max_element() function
            int m = *max_element(nums.begin(), nums.end());
            // find the corresponding name with the same index as the highest score
            auto it = find(nums.begin(), nums.end(), m);
            if (it != nums.end())
            {      
                int index = it - nums.begin();
                for (int i = 0; i < names.size(); i++) {
                    if (i == index) {
                        // prints the winner and his score
                        cout << endl << "The winner is: " <<endl<< names[i]<<" "<<m<<" "<<character[i] << endl;
                    }
                }
            }

            fin.close();
            fout.close();
            cout << endl << "Press any key to return: ";
            cin >> dumvar;
            continue;
        }
        else if (x == 3) { //prints the whole score file
            //if (system("CLS")) system("clear");
            fin.open("scores.txt");
            fout.open("scores.txt", ios::app);
            // if the player chooses you can view the whole score board instead of just the winner
            cout<<endl;
            while (getline(fin,word)) {
                cout << word<< endl;
            }
            fin.close();
            fout.close();
            cout << endl << "Press any key to return: ";
            cin >> dumvar;
            continue;
        }
        else if (x == 5) {
            continue;
        }
        else if(x==6){
            cout << endl << "Have a nice day.";
            return 0;
        }
        else if(x==2){
            cout<<endl<<"Up: S"<<endl<<"Down: S"<<endl<<"Left: A"<<endl<<"Right: D"<<endl<<"Stay: X"<<endl<<"Quit: Q"<<endl;
            cout << endl << "Press any key to return: ";
            cin >> dumvar;
            continue;
        }
        //if (system("CLS")) system("clear");
        cout<<endl << "Please enter your name: " << endl;
        cin >> name;

        while (true) {
            //if (system("CLS")) system("clear");
            // when the player hits 1 he can enter the main game loop and chose his class of fighter
            cout<<endl << "Choose your Charachter:" << endl << endl << "1- Assassin           HP: " << Assassin.get_hp() << " DMG: " << Assassin.get_pwr() << endl << endl << "2- Juggernaut         HP: " << Juggernaut.get_hp() << " DMG: " << Juggernaut.get_pwr() << endl << endl << "3- Tank               HP: " << Tank.get_hp() << " DMG: " << Tank.get_pwr() << endl << endl;
            cin >> choice1;
            stringstream convert(choice1);
            int choice2 = 0;
            convert >> choice2;
		    //charachter choice exception
            try {
                L = choice_check(choice2);
            }
            catch (const char* msg) {
                cerr << msg << endl;
                continue;
            }
            choice = choice2;
            break;
        }

        if (choice == 1) {
            // calling each map with the warrior the player chose and mvoing between them with the "==>" in each function
            int php = Assassin.get_hp(), pdmg = Assassin.get_pwr();
            dungeonTravirsal(d.dungeon1(Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon2(Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon3(Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon4(Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Assassin.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            bossfloor(d.dungeon5(Assassin.get_name(), Boss.get_name()), score, php, pdmg, Boss.get_hp(), Boss.get_pwr(), Assassin.get_name(), Boss.get_name(), vic);
            warriorchoice=Assassin.get_name();
        }
        else if (choice == 2) {
            int php = Juggernaut.get_hp(), pdmg = Juggernaut.get_pwr();
            dungeonTravirsal(d.dungeon1(Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon2(Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon3(Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon4(Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Juggernaut.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            bossfloor(d.dungeon5(Juggernaut.get_name(), Boss.get_name()), score, php, pdmg, Boss.get_hp(), Boss.get_pwr(), Juggernaut.get_name(), Boss.get_name(), vic);
            warriorchoice=Juggernaut.get_name();
        }

        else if (choice == 3) {
            int php = Tank.get_hp(), pdmg = Tank.get_pwr();
            dungeonTravirsal(d.dungeon1(Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon2(Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon3(Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            dungeonTravirsal(d.dungeon4(Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name()), score, php, pdmg, e1.get_hp(), e1.get_pwr(), e2.get_hp(), e2.get_pwr(), e3.get_hp(), e3.get_pwr(), Tank.get_name(), e1.get_name(), e2.get_name(), e3.get_name(), vic);
            bossfloor(d.dungeon5(Tank.get_name(), Boss.get_name()), score, php, pdmg, Boss.get_hp(), Boss.get_pwr(), Tank.get_name(), Boss.get_name(), vic);
            warriorchoice=Tank.get_name();
        }

        if (vic == 1) {
            cout << "YOU WIN!!!!!!!" << endl;
            cout << "your score is: " << score << endl;
        }
	    //prints the name and score of the player to the file
        fout.open("scores.txt", ios::app);
        fout << name << " " << score<<" "<<warriorchoice<<endl;
        fout.close();
        while (true) {
		// loop to ask the player if he wants to try again or exit the game
            cout << endl << endl << "Try again? Y/N" << endl;
            cin >> tryagain;
            if (tryagain == "y" || tryagain == "Y") {
                vic = 1;
                break;
            }
            else if (tryagain == "n" || tryagain == "N") {
                vic = 0;
                cout << endl << endl << "Have a nice day.";
                break;
            }
            else {
                cout << "invalid input!" << endl;
                continue;
            }
        }
    }
}