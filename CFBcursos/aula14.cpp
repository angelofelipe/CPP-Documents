#include <iostream>
using namespace std;
int main(){
    int n = 0;
    while(n<=10){
        cout << n << endl;
        n++;
        if(n==5){
            break;
        }
    }
    return 0;
}