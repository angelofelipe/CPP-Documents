#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Camiseta {
    string nome;
    string corLogo;
    char tamanho;

    bool operator<(const Camiseta &outra) const {
        if (corLogo != outra.corLogo) {
            return corLogo < outra.corLogo;
        }
        if (tamanho != outra.tamanho) {
            return tamanho > outra.tamanho;
        }
        return nome < outra.nome;
    }
};

int main() {
    int N, verifica = 0;
    while (cin >> N && N != 0) {

        if ( verifica )
            cout << endl; // Linha em branco entre casos de teste

        verifica++;
        vector<Camiseta> camisetas;

        for (int i = 0; i < N; i++) {
            Camiseta camiseta;
            cin.ignore(); // Consumir a quebra de linha anterior
            getline(cin, camiseta.nome);
            cin >> camiseta.corLogo >> camiseta.tamanho;
            camisetas.push_back(camiseta);
        }

        // Ordenar as camisetas conforme as regras
        sort(camisetas.begin(), camisetas.end());

        // Imprimir as camisetas ordenadas
        for (const Camiseta &camiseta : camisetas) {
            cout << camiseta.corLogo << " " << camiseta.tamanho << " " << camiseta.nome << endl;
        }

    }

    return 0;
}