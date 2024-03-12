#include <iostream>
#include <set>
using namespace std;

int main(){
    int quantity_inputs = 0, half_inputs = 0, input = 0, i = 0, end_size = 0;
    set<int> selected_numbers;

    cin >> quantity_inputs;
    half_inputs = quantity_inputs / 2;

    for (i = 0; i < quantity_inputs; i++){
        cin >> input;
        selected_numbers.insert(input);
    }
    
    end_size = selected_numbers.size();
    if (end_size == half_inputs){
        cout << "Azarado";
    }else if (end_size > half_inputs && end_size < quantity_inputs){
        cout << "Ganhou um pote";
    }else{
        cout << "Sortudo, ganhou os dois potes";
    }
    
    return 0;
}