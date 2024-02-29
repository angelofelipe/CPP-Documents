#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int all_friends = 0, max_weight = 0;
    cin >> all_friends;
    pair<int, string> aux_friend;
    vector<pair<int, string>> friends;
    for (int i = 0; i < all_friends; i++){
        cin >> aux_friend.second >> aux_friend.first;
        friends.push_back(aux_friend);
    }
    cin >> max_weight;

    bool print_phrase = true;
    for (int i = 0; i < all_friends; i++){
        if (friends[i].first > max_weight && print_phrase){
            cout << "Vamos virar almoço de aranhas gigantes!\n";
            cout << friends[i].second << endl;
            print_phrase = false;
        }else if (friends[i].first > max_weight){
            cout << friends[i].second << endl;
        }else if (print_phrase && i == all_friends - 1){
            cout << "Vamos todos encontrar a montanha!";
        }
    }
}