#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;

void visualizarVector( vector<int> vetor) {
    for (int i = 0; i < int(vetor.size()); i++)
        cout << vetor[i] << " ";
    cout << endl;
}

void swap ( int &isSwap, int &less ) {
    int temp = isSwap;
    isSwap = less;
    less = temp;
}

// Open e End são os índices verdadeiros do vetor.
int partition (vector<int> &array, int open, int end) {
    int pivot = array[ end ];
    int isSwap = open - 1;
    for ( int i = open; i < end; i++ ) {
        if ( array[i] <= pivot ) {
            isSwap++;
            swap( array[isSwap], array[i] );
        }
    }
    swap( array[ isSwap + 1 ], array[ end ]);
    return (isSwap + 1);
}

// Open e o End são os índices verdadeiros do vetor. Normalmente o end dá a ideia de vetor.size();
// call(quickSort) -> end = vetor.size() - 1;
void quickSort ( vector<int> &array, int open, int end ) {
    if ( open < end ) {
        int pivot = partition( array, open, end);
        quickSort( array, open, pivot - 1);
        quickSort( array, pivot + 1, end );
    }
}

void somaUm ( int& num ){
    num = num + 1;
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

int main() {

    cout << "Digite uma sequencia de numeros inteiros" << endl;
    vector<int> vetor = pegarLinhaInt();
    visualizarVector( vetor );
    quickSort( vetor, 0, int(vetor.size()) - 1);
    visualizarVector( vetor );

    return 0;
}