#include <iostream>
using namespace std;

void texto();
void soma(int n1, int n2);
int mult(int n1, int n2);
void tr(string tra[4]);

int main(){
    int res;
    string transporte[4] = {"carro","moto","barco","avião"};
    
    texto();
    soma(20, 50);
    res = mult(30, 10);
    cout << "1 MODO: A multiplicação entre 30 e 10 é " << res << " . \n";
    cout << "2 MODO: A multiplicação entre 30 e 10 é " << mult(30, 10) << " . \n";
    tr(transporte); 
    
    return 0;
}
void texto(){
    cout << "Seja bem-vindo! \n";
}
void soma(int n1, int n2){
    cout << "A soma de " << n1 << " + " << n2 << " é igual a " << n1 + n2 << ". \n";
}
int mult(int n1, int n2){
    return n1 * n2;
}
void tr(string tra[4]){
    for(int i = 0; i < 4; i++){
        cout << tra[i] << "\n";
    }
}