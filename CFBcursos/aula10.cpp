#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main(){
    inicio:
    int n1 = 0, n2 = 0, res = 0;
    char a1;
    nota1:

    system("cls");
    cout << "Digite a primeira nota: ";
    cin >> n1;
    if(n1 > 10){
        cout << "Nota inválida, digite novamente após apertar enter.";
        //system("pause");
        goto nota1;
    }
    nota2:
    //system("cls");
    cout << endl << "Digite a segunda nota: ";
    cin >> n2;
    if(n2 > 10){
        cout << "Nota inválida, digite novamente após apertar enter.";
        //system("pause");
        goto nota2;
    }
    res = (n1 + n2)/2;
    if(res >= 7){
        cout << "Aprovado" << endl;
    }else if(res >= 4){
        cout << "Recuperação" << endl;
    }else{
        cout << "Reprovado" << endl;
    }
    
    cout << "Quer calcular mais notas? [S/N] ou [s/n]" << endl;
    cin >> a1; 
    if(a1 == 'S' || a1 == 's'){
        goto inicio;
    }
    
    return 0;
}