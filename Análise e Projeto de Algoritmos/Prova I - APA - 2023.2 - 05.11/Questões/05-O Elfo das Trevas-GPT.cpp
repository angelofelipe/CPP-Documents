#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Rena {
    string nome;
    int peso, idade;
    double altura;
};

bool comparaRenas(const Rena& a, const Rena& b) {
    if (a.peso != b.peso) {
        return a.peso > b.peso;
    }
    if (a.idade != b.idade) {
        return a.idade < b.idade;
    }
    if (a.altura != b.altura) {
        return a.altura < b.altura;
    }
    return a.nome < b.nome;
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N, M;
        cin >> N >> M;

        vector<Rena> renas(N);

        for (int j = 0; j < N; j++) {
            Rena rena;
            cin >> rena.nome >> rena.peso >> rena.idade >> rena.altura;
            renas[j] = rena;
        }

        sort(renas.begin(), renas.end(), comparaRenas);

        cout << "CENARIO {" << i << "}" << endl;
        for (int j = 0; j < M; j++) {
            cout << j + 1 << " - " << renas[j].nome << endl;
        }
    }

    return 0;
}
