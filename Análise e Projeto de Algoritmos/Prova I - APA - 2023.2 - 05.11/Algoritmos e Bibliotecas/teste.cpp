#include <iostream>
#include <vector>
// #include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num = {0};
    cout << "Hello, World!2" << endl << num[0] << "\n";
    num.push_back(2);
    cout << num.capacity() << "\n";
    // num.insert(num.begin(), 3);
    // num.insert(num.end(), 3);
    num.insert(num.begin() + 1, 2, 3);
    for (int i = 0; i < int(num.size()); i++)
        cout << num[i] << " ";
    cout << "\n" << num.capacity() << "\n";
    string abc = "";
    // cin >> num1;
    // cout << "\n" << num1;
    /*
    int num1 = 0;
    cout << "Escreva a entrada\n";
    cin >> abc;
    cout << "\n" << abc << "\n" << abc[0];
    num1 = stoi("154");
    cout << num1 ;
    */

    /*
    char abc1[1000];
    cin.getline(abc1, 100);
    int i = 0;
    while (abc1[i] != '\0' ){
        cout << abc1[i];
        i++;
    }

    cout << "\nManda a braba!\n";
    getline(cin, abc);
    cout << "*" << abc << "*";

    i = 0;

    while (abc[i] != '\0')
    {
        cout << abc[i] << "*";
    }*/

    // cin.ignore();

    string name, copy;
    int id; 
    /*
    // Taking id as input 
    cout << "Please enter your id: \n"; 
    cin >> id; 
  
    // Takes the empty character as input 
    cout << "Please enter your name: \n"; 
    cin.ignore();
    getline(cin, name); // Se um 'cin' é lido antes do getline() deve ser usado o .ignore()
  
    // Prints id 
    cout << "Your id : " << id << "\n"; 
  
    // Prints nothing in name field 
    // as "\n" is considered a valid string 
    cout << "Hello, " << name 
         << " welcome to GfG !\n"; 
  
    cin >> id;
    // Again Taking string as input 
    getline(cin, name); 
  
    // This actually prints the name 
    cout << "Hello, " << name 
         << " welcome to GfG !\n"; 
    */

    getline(cin, name);

    stringstream stream0(name);
    while (getline(stream0, copy, ' '))
    {
        cout << copy << endl;
    }
    


    return 0;
}