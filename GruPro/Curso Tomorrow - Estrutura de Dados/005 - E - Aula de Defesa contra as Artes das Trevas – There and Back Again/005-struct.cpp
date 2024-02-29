#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

int binary_search_spells( vector<string> string_list, string name ){
    int left = 0, mid = 0, right = string_list.size() - 1;
    while (left <= right){
        mid = (left + right)/2;
        if(name == string_list[mid])
            return mid;
        else if(name < string_list[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main(){
    int number, number2;
    string spell;
    vector<string> general, banned, search;
    cin >> number;
    for (int i = 0; i < number; i++){
        cin >> spell;
        general.push_back(spell);
    }
    cout << general.size();
    cin >> number;
    for (int i = 0; i < number; i++){
        cin >> spell;
        banned.push_back(spell);
    }
    cin >> number;
    for (int i = 0; i < number; i++){
        cin >> spell;
        search.push_back(spell);
    }

    for(int i = 0; i < number; i++){
        number2 = binary_search_spells(general, search[i]);
        if (number2 >= 0)
            cout << "Geral\n";
        else
            cout << "Proibido\n";
    }

    return 0;   
}