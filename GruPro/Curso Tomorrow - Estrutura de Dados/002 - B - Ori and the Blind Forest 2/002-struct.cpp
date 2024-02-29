#include <iostream>
#include <vector>
using namespace std;

struct experience{
    int xp;
    int bonus;
};

int main(){
    int missions = 0, upgrade = 0, extra_bonus = 0, sum_xp = 0;
    experience level;
    vector<experience> levels;

    cin >> missions;
    level.bonus = 0;
    for (int i = 0; i < missions; i++){
        cin >> level.xp;
        levels.push_back(level);
    }
    for (int i = 0; i < missions; i++){
        cin >> level.bonus;
        levels[i].bonus = level.bonus;
    }
    cin >> upgrade >> extra_bonus;

    for (int i = 0; i < missions; i++){
        levels[i].bonus += extra_bonus;
    }
    for (int i = 0; i < missions; i++){
        sum_xp += levels[i].xp * levels[i].bonus;
    }
    
    if (upgrade <= sum_xp){
        cout << "Upou de Nivel!";
    }else{
        cout << "Nao foi dessa vez!";
    }
}