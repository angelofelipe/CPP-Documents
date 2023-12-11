#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main (){
    int i = 0b000;
    int n = 0b111;
    int f = i & 1;
    int g = n & 1;
    printf("i= %d, n= %d\n", i, n);
    cout << "i= " <<  bitset<8>(i) << ", n= " << bitset<8>(n) << endl;
    
    printf("i & 1 = %d\n", f);
    printf("n & 1 = %d\n", g);

    cout << "i = " << bitset<8>(i) << endl;
    cout << "n = " << bitset<8>(n) << endl;
    cout << "i & 1 = " << bitset<8>(i & 1) << endl;
    cout << "n & 1 = " << bitset<8>(n & 1);
    return 0;
}

// Todo número binário terminado em 0 é par e em 1 é ímpar
/*-------------`
|   0000 = 00   |
|   0001 = 01   |
|   0010 = 02   |
|   0011 = 03   |
|   0100 = 04   |
|   0101 = 05   |
|   0110 = 06   |
|   0111 = 07   |
|   1000 = 08   |
|   1001 = 09   |
|   1010 = 10   |
|   1011 = 11   |
|   1100 = 12   |
|   1101 = 13   |
|   1110 = 14   |
|   1111 = 15   |
`--------------*/