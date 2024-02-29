#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int amount_worlds;
    pair<int, int> world_id;
    vector<pair<int, int>> worlds;

    cin >> amount_worlds;
    for (int i = 0; i < amount_worlds; i++){
        cin >> world_id.second >> world_id.first;
        worlds.push_back(world_id);
    }
    
    sort(worlds.begin(), worlds.end());

    for (int i = amount_worlds - 1; i >= 0; i--){
        cout << worlds[i].second << " " << worlds[i].first << endl;
    }
}