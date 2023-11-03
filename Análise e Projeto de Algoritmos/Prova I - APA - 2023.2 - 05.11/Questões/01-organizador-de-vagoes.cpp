#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// FUNÇÕES DE ENTRADA E SAÍDA

void visualizarVector( vector<int> vetor) {
    for (int i = 0; i < int(vetor.size()); i++)
        cout << vetor[i] << " ";
    cout << endl;
}

// ignore != 0 -> Foi lido algo na entrada com cin anteriormente;
vector<int> pegarLinhaInt (int ignore = 0) {
    if ( ignore != 0 )
        cin.ignore();

    string line, copy;
    vector<int> vetorLineInt;
    getline(cin, line);

    stringstream streamTokens(line);
    while ( getline(streamTokens, copy, ' ') )
        vetorLineInt.emplace_back(stoi(copy));

    return vetorLineInt;
}

// BUBBLESORT

void swap ( int &isSwap, int &less ) {
    int temp = isSwap;
    isSwap = less;
    less = temp;
}

int bubbleSort ( vector<int> &array ) {
    int size = int(array.size()), contSwapping = 0;

    for ( int i = 0; i < size - 1; i++) {
        for ( int j = 0; j < size - 1 - i; j++) {
            if ( array[j] > array[ j + 1 ]) {
                swap( array[j], array[ j + 1 ]);
                contSwapping++;
            }
        }
    }
    return contSwapping;
}

// MAIN

int main() {

    int problemas = 0, vagoes = 0, contSwapping = 0;
    vector<int> array;

    cin >> problemas;
    for ( int i = 0; i < problemas; i++ ) {
        contSwapping = 0;
        cin >> vagoes;
        array = pegarLinhaInt( 1 );
        contSwapping = bubbleSort( array );
        cout << "Optimal train swapping takes " <<  contSwapping << " swaps.\n";
    }

    return 0;
}