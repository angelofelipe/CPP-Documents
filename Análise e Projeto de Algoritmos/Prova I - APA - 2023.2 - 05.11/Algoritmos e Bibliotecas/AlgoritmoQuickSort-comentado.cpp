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

int partition (vector<int> &array, int open, int end) {
    int pivot = array[ end ];
    int isSwap = open - 1;
    for ( int i = open; i < end; i++ ) {
        if ( array[i] <= pivot ) {
            isSwap++;
            swap( array[isSwap], array[i] );
            visualizarVector( array );
        }
    }
    cout << "Acabou o For\n";
    swap( array[ isSwap + 1 ], array[ end ]);
    visualizarVector( array );
    cout << "Pivot: " << isSwap + 1 << " Saiu do partition\n";
    return (isSwap + 1);
}

void quickSort ( vector<int> &array, int open, int end ) {
    cout << "Entrou no Sort. open: " << open << " end: " << end << endl;
    if ( open < end ) {
        int pivot = partition( array, open, end);
        cout << "QuickSort Direito \n";
        quickSort( array, open, pivot - 1); // pivot == end -> não estou subtraindo 1 porque o partition está fazendo isso
        cout << "QuickSort Esquerdo \n";
        quickSort( array, pivot + 1, end );
    }
}

void somaUm ( int& num ){
    num = num + 1;
}

vector<int> pegarLinhaInt (int ignore = 0) {    // Só passa entrada > 0 , se foi utilizada um cin antes de chamar a função
    if ( ignore != 0 )
        cin.ignore();

    string line, copy;
    vector<int> vetorLineInt;
    getline(cin, line);

    stringstream streamTokens(line);
    while ( getline(streamTokens, copy, ' ') ) {
        vetorLineInt.emplace_back(stoi(copy));

    }
        // cout << typeid(copy).name() << " " << stoi(copy) << endl;
    return vetorLineInt;
    
}

int main() {
    cout << "Hello, World!" << endl;
    vector<int> vetor = {3, 2, 7, 1, 5, 3};
    cout << "Saiu do main()\n";
    quickSort( vetor, 0, int(vetor.size()) - 1);
    // int pivot = partition( vetor, 0, vetor.size() - 1);
    // pivot = partition( vetor, 0, 2);
    cout << "Entrou no main()\n";
    // cout << "\nPivot: " << pivot << endl;
    visualizarVector( vetor );
    cout << "OI\n";



    /*
    int num = 0, num1 = 4;
    somaUm( num );
    cout << endl << num;
    swap( num, num1 );
    cout << endl << num << " " << num1;

    int vecNum[2] = {3, 6};
    swap( vecNum[0], vecNum[1] );
    cout << endl << vecNum[0] << " " << vecNum[1];

    vector<int> vectorN = {5, 7};
    swap( vectorN[0], vectorN[1] );
    cout << endl << vectorN[0] << " " << vectorN[1];
    */

    vector<int> novoVetor = pegarLinhaInt();
    visualizarVector( novoVetor );
    return 0;
}