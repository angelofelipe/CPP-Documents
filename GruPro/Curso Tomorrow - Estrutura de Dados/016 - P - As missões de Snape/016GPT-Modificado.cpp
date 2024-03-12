#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student {
    string name;
    int level;

    bool operator<(const Student& other) const {
        return level < other.level;
    }
};

int main() {
    int days;
    int gryffindorCount, slytherinCount, missions;
    Student student;
    vector<Student> gryffindor;
    vector<Student> slytherin;
    
    cin >> days;

    for (int day = 0; day < days; ++day) {
        cin >> gryffindorCount >> slytherinCount >> missions;


        for (int i = 0; i < gryffindorCount; ++i) {
            cin >> student.level;
            cin.ignore(1, ' ');
            getline(cin, student.name);
            gryffindor.push_back(student);
        }

        for (int i = 0; i < slytherinCount; ++i) {
            cin >> student.level;
            cin.ignore(1, ' ');
            getline(cin, student.name);
            slytherin.push_back(student);
        }

        sort(gryffindor.rbegin(), gryffindor.rend()); // Ordena em ordem decrescente de habilidade
        sort(slytherin.begin(), slytherin.end());     // Ordena em ordem crescente de habilidade

        int totalStudents = min(gryffindor.size(), slytherin.size());
        int pairs = min(missions, totalStudents);

        for (int i = 0; i < pairs; ++i) {
            cout << gryffindor[i].name << " e " << slytherin[i].name << endl;
        }

        gryffindor.erase(gryffindor.begin(), gryffindor.begin()+pairs);
        slytherin.erase(slytherin.begin(), slytherin.begin()+pairs);

    }

    return 0;
}
