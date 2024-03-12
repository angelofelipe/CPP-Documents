#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    int quantity = 0;
    string phrase, word;

    // Mapa para armazenar as traduções
    map<string, string> dictionary;

    // Ler e armazenar as traduções no mapa
    cin >> quantity;
    cin.ignore();
    for (int i = 0; i < quantity; ++i) {
        getline(cin, phrase);
        istringstream stream(phrase);
        stream >> word;
        string translation;
        stream >> translation;
        dictionary[word] = translation;
    }

    // Ler e traduzir a frase
    cin >> quantity;
    cin.ignore();
    getline(cin, phrase);
    istringstream stream(phrase);

    // Traduzir e imprimir a frase
    while (stream >> word) {
        auto it = dictionary.find(word);
        if (it != dictionary.end()) {
            cout << it->second << " ";
        } else {
            cout << word << " ";
        }
    }

    return 0;
}
