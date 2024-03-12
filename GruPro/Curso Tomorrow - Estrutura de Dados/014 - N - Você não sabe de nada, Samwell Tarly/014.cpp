#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(){
    int i = 0, quantity = 0;
    string phrase, word;
    vector<string> sliced_phrase;
    pair <string, string> entry;
    set <pair <string, string>> dictionary;
    set <pair <string, string>>::iterator it;

    
    cin >> quantity;
    cin.ignore();
    for ( i = 0; i < quantity; i++){
        getline(cin, phrase);
        istringstream stream1(phrase);
        stream1 >> entry.first;
        stream1 >> entry.second;
        dictionary.insert(entry);
    }
    
    cin >> quantity;
    cin.ignore();
    getline(cin, phrase);
    istringstream stream2(phrase);
    for ( i = 0; i < quantity; i++){
        stream2 >> word;
        sliced_phrase.push_back(word);
    }
    
    for ( i = 0; i < quantity; i++){
        for (it = dictionary.begin(); it != dictionary.end(); it++){
            if(sliced_phrase[i] == it->first)
                sliced_phrase[i] = it->second;
        }
    }
    
    for ( i = 0; i < quantity; i++)
        cout << sliced_phrase[i] << " ";
    
    return 0;
}
