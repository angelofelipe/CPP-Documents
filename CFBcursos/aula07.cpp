#include <iostream> 
using namespace std;
int main(){
    int n1 = 1;
    cout << "Valor de n1 com o pré-incremento: " << ++n1 << endl;
    cout << "Valor de n1 antes do pós-incremento: " << n1++ << endl;
    cout << "Valor de n1 depois do pós-incremento: " << n1 << endl;
    return 0;
}