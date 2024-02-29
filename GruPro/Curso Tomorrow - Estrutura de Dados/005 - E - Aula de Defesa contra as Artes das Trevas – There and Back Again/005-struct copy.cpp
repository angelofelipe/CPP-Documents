#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int binary_search_spells(const vector<string>& string_list, const string& name) {
    int left = 0, right = string_list.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (name == string_list[mid]) {
            return mid;
        } else if (name < string_list[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int num_general, num_banned, num_queries;
    string spell;
    vector<string> general, banned, search;

    cin >> num_general;

    for (int i = 0; i < num_general; i++) {
        cin >> spell;
        general.push_back(spell);
    }

    cin >> num_banned;

    for (int i = 0; i < num_banned; i++) {
        cin >> spell;
        banned.push_back(spell);
    }

    cin >> num_queries;

    for (int i = 0; i < num_queries; i++) {
        cin >> spell;
        int index_general = binary_search_spells(general, spell);
        int index_banned = binary_search_spells(banned, spell);

        if (index_general >= 0) {
            cout << "Geral\n";
        } else if (index_banned >= 0) {
            cout << "Proibido\n";
        }
    }

    return 0;
}
