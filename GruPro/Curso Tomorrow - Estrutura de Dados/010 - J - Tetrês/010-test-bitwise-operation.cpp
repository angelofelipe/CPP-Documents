#include <iostream>
#include <stack>
#include <bitset>
using namespace std;

int main (){
    string bin_str1, bin_str2;
    cin >> bin_str1 >> bin_str2;
    bitset<3> binario1(bin_str1), binario2(bin_str2), binario3;
    binario3 = binario1 | binario2;
    cout << binario3 << endl;
    int num1 = static_cast<int>(binario1.to_ulong());
    int num2 = static_cast<int>(binario2.to_ulong());
    int num3 = num1 | num2;
    cout << num3;
    return 0;
}