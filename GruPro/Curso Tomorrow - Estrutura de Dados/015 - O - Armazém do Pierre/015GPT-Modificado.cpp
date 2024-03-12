#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Resident {
    string name;
    int age;
};

bool compareResidents(const Resident& a, const Resident& b) {
    return a.age > b.age; // Ordena em ordem decrescente de idade
}

int main() {
    int days, dailyCapacity, exclude;

    // Leitura do número de dias e capacidade diária de atendimento
    cin >> days >> dailyCapacity;
    Resident resident_aux;
    vector<Resident> residents;

    for (int day = 0; day < days; ++day) {
        int queueSize;
        cin >> queueSize;


        // Leitura dos moradores
        for (int i = 0; i < queueSize; ++i) {
            cin >> resident_aux.name >> resident_aux.age;
            residents.push_back(resident_aux);
        }

        // Ordena os moradores em ordem decrescente de idade
        sort(residents.begin(), residents.end(), compareResidents);

        // Imprime os nomes dos moradores atendidos
        exclude = 0;
        for (int i = 0; i < dailyCapacity; ++i) {
            if (residents.size() != 0){
                cout << residents[i].name << endl;
                exclude++;
            }else{
                break;
            }
        }
        residents.erase(residents.begin(), residents.begin() + exclude);
    }

    return 0;
}
