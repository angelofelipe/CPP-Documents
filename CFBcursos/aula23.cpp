//Sobrecarga de Funções
#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();
void soma(int n3, int n4, int n5);

int main(){
    soma(10, 20);
    soma();
    soma(30, 40, 20);
    return 0;
}

void soma(int n1, int n2){
    cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
}

void soma(){
    int n1 = 10, n2 = 10, res = n1 + n2;
    cout << n1 << " + " << n2 << " = " << res << " .\n";
}

void soma(int n3, int n4, int n5){
    cout << "A soma de " << n3 << " + " << n4 << " + " << n5 << " = " << n3 + n4 + n5 << ". \n";
}