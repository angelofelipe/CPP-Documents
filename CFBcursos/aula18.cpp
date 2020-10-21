#include <iostream>
using namespace std;
int main(){
    //int n = 0; cin >> n; int notas2[n];
    int n=3, notas[n];
    for(int x = 0; x < sizeof(notas)/4; x++){
        cin >> notas[x];
        cout << x << "  <-X  " << notas[x] << "  <-notas[" << x << "]   " << notas[x]*3 << "  <-x3" << endl;
    }
    return 0;
}