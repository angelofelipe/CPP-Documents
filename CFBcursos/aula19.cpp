#include <iostream>
using namespace std;
int main(){
    int matriz[2][5];
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 5; c++){
            matriz[l][c] = l;
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
    return 0;
}