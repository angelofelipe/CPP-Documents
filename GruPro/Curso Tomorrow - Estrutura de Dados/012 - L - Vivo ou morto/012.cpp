#include <iostream>
#include <set>
#include <string>
#include <iterator>
using namespace std;

int main(){
    int i = 0, quantity_lives = 0, quantity_deaths = 0;
    string name;
    set <string> names_lives, names_deaths;
    set <string>::iterator it_name;

    cin >> quantity_lives;
    cin.ignore();
    for (i = 0; i < quantity_lives; i++){
        getline(cin, name);
        names_lives.insert(name);
    }
    
    cin >> quantity_deaths;
    cin.ignore();
    for (i = 0; i < quantity_deaths; i++){
        getline(cin, name);
        names_deaths.insert(name);
    }
    
    for( it_name = names_deaths.begin(); it_name != names_deaths.end(); it_name++)
        names_lives.erase(*it_name);
    
    for ( it_name = names_lives.begin(); it_name != names_lives.end(); it_name++)
        cout << *it_name << endl;

    for ( it_name = names_deaths.begin(); it_name != names_deaths.end(); it_name++)
        cout << *it_name << endl;
    
    return 0;
}