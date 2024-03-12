#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream> // Utilizar sstream para processar entrada com várias palavras na mesma linha
using namespace std;

struct word_counter{
    string word;
    int counter;
};

bool cmp(word_counter a, word_counter b){
    return (a.counter < b.counter || (a.counter == b.counter && a.word < b.word));
}

int main(){
    
    //(type) func(var_string)
    //istringstream stream(phrase)
    int i = 0, lines = 0, total = 0;
    long long unsigned int j;
    string phrase, word;
    word_counter word_aux;
    vector <word_counter> words;

    cin >> lines;
    cin.ignore();
    for ( i = 0; i < lines; i++){
        getline(cin, phrase);
        istringstream stream(phrase);
        while (stream >> word){
            for (j = 0; j <= words.size(); j++){
                if (j == words.size()){
                    word_aux.counter = 1;
                    word_aux.word = word;
                    words.push_back(word_aux);
                    break;
                }else if (words[j].word == word){
                    words[j].counter++;
                    break;
                }
            }
        }
    }
    
    sort(words.begin(), words.end(), cmp);

    for (j = 0; j < words.size(); j++){
        if (words[j].counter == 1)
            total++;
        else
            break;
    }
    
    cout << total << endl;
    for ( i = 0; i < total; i++)
        cout << words[i].word << endl ;
     
    return 0;
}