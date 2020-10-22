#include <iostream> 
#include <string.h>
using namespace std;
int main(int argc, char *argv[]){
    if(argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao clube!";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema!";
        }else{
            cout << "Vou ficar em casa!";
        }
    }
    /*
    Para compilar em C    $gcc nome_arquivo.c
    Para compilar em C++  $g++ nome_arquivo.cpp
    Para executar qualquer um dos dois já compilados $./a.out parametro se nescessário
    */
    return 0;
}