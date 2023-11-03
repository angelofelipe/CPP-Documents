#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <tuple>
using namespace std;

string cor = "", cor1 = "", cor2 = "";
string nome = "", nome1 = "", nome2 = "";
char tamanhoCamisa = ' ', tamanhoCamisa1 = ' ', tamanhoCamisa2 = ' ';

void desenveloparTuple ( tuple< string, char, string > &tupla,
                         string &cor, char &tamanhoCamisa, string &nome ) {
    tie( cor, tamanhoCamisa, nome ) = tupla;
}

void visualizarVectorOfTuple( vector< tuple< string, char, string > > array) {
    for (int i = 0; i < int(array.size()); i++) {
        desenveloparTuple( array[i], cor, tamanhoCamisa, nome );
        cout << cor << " " << tamanhoCamisa << " " << nome << endl;
    }
    // cout << endl;
}

// QUICKSORT

void swapTuple ( tuple< string, char, string > &isSwap, tuple< string, char, string > &less ) {
    tuple< string, char, string > temp = isSwap;
    isSwap = less;
    less = temp;
}

int partition ( vector< tuple< string, char, string > > &array, int open, int end, int ordenarPor ) {
    desenveloparTuple( array[ end ], cor, tamanhoCamisa, nome );
    int isSwap = open - 1;
    string pivot;
    switch( ordenarPor ) {
        cout << "entrou no Switch\n";
        case 0:
            pivot = cor;
            for ( int i = open; i < end; i++ ) {
                desenveloparTuple( array[i], cor1, tamanhoCamisa1, nome1 );
                if ( cor1 <= pivot ) {
                    isSwap++;
                    swapTuple( array[isSwap], array[i] );
                }
            }
            swapTuple( array[ isSwap + 1 ], array[ end ]);
            break;
    
        default:
            return -1;
            break;
    }
        
    return (isSwap + 1);
}

void quickSort ( vector< tuple< string, char, string > > &array, int open, int end, int ordenarPor ) {
    if ( open < end ) {
        int pivot = partition( array, open, end, ordenarPor );
        if ( pivot == -1 ) return;
        quickSort( array, open, pivot - 1, ordenarPor );
        quickSort( array, pivot + 1, end, ordenarPor );
    }
}

vector<string> pegarLinha (int ignore = 0) {    // Só passa entrada > 0 , se foi utilizada um cin antes de chamar a função
    if ( ignore != 0 )
        cin.ignore();

    string line, copy;
    vector<string> vetorLine;
    getline(cin, line);

    stringstream streamTokens(line);
    while ( getline(streamTokens, copy, ' ') ) {
        vetorLine.emplace_back(copy);
    }
    return vetorLine;    
}

int main() {

    int condicao = 0;
    string nomeInput = "";
    vector<string> linha;
    vector< tuple< string, char, string > > arrayTupla; // make_tuple(cor, tamanhoCamisa, nome);
    cin >> condicao;
    while ( condicao ) {
        arrayTupla.clear();
        cin.ignore();
        for ( int i = 0; i < condicao; i++ ) {
            getline( cin, nomeInput );
            linha = pegarLinha();
            cor = linha[0];
            tamanhoCamisa = linha[1][0];
            arrayTupla.emplace_back( make_tuple( cor, tamanhoCamisa, nomeInput ) );
        }
        cout << endl ;
        visualizarVectorOfTuple( arrayTupla );
        quickSort( arrayTupla, 0, int(arrayTupla.size()) - 1, 0 );
        cout << endl ;
        visualizarVectorOfTuple( arrayTupla );
        cin >> condicao;

    }
    cout << endl ;
    swapTuple( arrayTupla[0], arrayTupla[1]);
    visualizarVectorOfTuple( arrayTupla );
    

    // vector<string> linha = pegarLinha();
    // vector<string> linha;
    // char c = 'a';
    // string a(1, 'D');
    // c = a[0];
    // linha.assign( { "vermelho", "P" });
    // cout << linha[0] << " " << linha[1] << " " << c << " " << a << endl;

    
    // string str1 = "Felipe Angelo", str2 = "Mateus Algusto";
    // str1 = "Mateus Algusto";
    // if ( str1 < str2) {
    //     cout << "str1 < str2";
    // } else if ( str1 > str2 ) {
    //     cout << "str1 > str2";
    // } else {
    //     cout << "str1 == str2";
    // }

    // if ( 'A' < 'B')
    //     cout << "\ntrue";

    // vector<tuple< string, char, string >> array;
    // array.emplace_back(make_tuple("branco", 'A', "Felipe"));
    // array.emplace_back(make_tuple("vermelho", 'B', "Marcos"));
    // tuple< string, char, string > tupleTemp = array[0];
    // array[0] = array[1];
    // array[1] = tupleTemp;
    // string a, c;
    // char b;
    // tie( a, b, c ) = array[1];
    // cout << endl << a << endl << b << endl << c;
    

    return 0;
}
