#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <bits/stdc++.h>
// #include <typeinfo>
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

// FUNÇÕES SORT

// QUICKSORT

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

// MERGESORT

void merge ( vector<int> &array, int open, int mid, int end ) {
    int size1 = mid - open + 1;
    int size2 = end - mid;
    vector<int> left, right;
    left.assign( size1 + 1, 0 );
    right.assign( size2 + 1, 0 );

    for ( int i = 0; i < size1; i++ )
        left[i] = array[ open + i ];

    for ( int j = 0; j < size2; j++ )
        right[j] = array[ mid + j + 1 ];

    left[ size1 ] = INT_MAX;
    right[ size2 ] = INT_MAX;

    int indiceL = 0, indiceR = 0;
    for ( int i = open; i <= end; i++ ) {
        if ( left[ indiceL ] <= right[ indiceR ]) {
            array[i] = left[ indiceL ];
            indiceL++;
        } else {
            array[i] = right[ indiceR ];
            indiceR++;
        }
    }
}

void mergeSort ( vector<int> &array, int open, int end ) {
    if ( open < end ) {
        int mid = floor( ( open + end ) / 2 );
        mergeSort( array, open, mid );
        mergeSort( array, mid + 1, end);
        merge( array, open, mid, end );
    }
}

// MAIN

int main() {

    // cout << "Digite uma sequencia de numeros inteiros" << endl;
    // vector<int> vetor0 = pegarLinhaInt();
    // visualizarVector( vetor0 );
    // quickSort( vetor0, 0, int(vetor0.size()) - 1);
    // visualizarVector( vetor0 );

    cout << "Digite uma sequencia de numeros inteiros\n";
    vector<int> vetor1; //= pegarLinhaInt();
    vetor1.assign( {9, 8, 7, 6, 5, 4, 3, 2, 1} );
    // vetor1.assign( {1, 3, 5, 7, 9, 0, 2, 4, 6, 8} );
    // vetor1.assign( {2, 1} );
    // vetor1.assign( {2} );
    visualizarVector( vetor1 );
    // merge( vetor1, 0, floor((int(vetor1.size()) - 1)/2), int(vetor1.size()) - 1 );
    mergeSort( vetor1, 0, int(vetor1.size()) - 1 );
    visualizarVector( vetor1 );

    return 0;
}