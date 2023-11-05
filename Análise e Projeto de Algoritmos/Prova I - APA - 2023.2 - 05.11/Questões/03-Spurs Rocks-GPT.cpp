#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int numero;
    int pontos;
    double cestaAverage;
    int totalPontosMarcados;
    int totalPontosTomados;

    Time(int num) : numero(num), pontos(0), cestaAverage(0), totalPontosMarcados(0), totalPontosTomados(0) {}

    bool operator<(const Time &outro) const {
        if (pontos != outro.pontos) {
            return pontos > outro.pontos;
        }
        if (cestaAverage != outro.cestaAverage) {
            return cestaAverage > outro.cestaAverage;
        }
        if (totalPontosMarcados != outro.totalPontosMarcados) {
            return totalPontosMarcados > outro.totalPontosMarcados;
        }
        return numero < outro.numero;
    }
};

int main() {
    int n, caso = 1, verifica = 0;
    while (cin >> n && n != 0) {

        if ( verifica )
            cout << "\n"; // Linha em branco entre casos de teste

        verifica++;

        vector<Time> times;

        for (int i = 1; i <= n; i++) {
            times.emplace_back(i);
        }

        for (int i = 0; i < (n * (n - 1)) / 2; i++) {
            int x, y, z, w;
            cin >> x >> y >> z >> w;
            times[x - 1].totalPontosMarcados += y;
            times[z - 1].totalPontosMarcados += w;

            times[x - 1].totalPontosTomados += w;
            times[z - 1].totalPontosTomados += y;

            if (y > w) {
                times[x - 1].pontos += 2;
                times[z - 1].pontos += 1;
            } else {
                times[z - 1].pontos += 2;
                times[x - 1].pontos += 1;
            }
        }

        for (Time &time : times) {
            if (time.totalPontosTomados > 0) {
                time.cestaAverage = static_cast<double>(time.totalPontosMarcados) / time.totalPontosTomados;
            } else {
                time.cestaAverage = time.totalPontosMarcados;
            }
        }

        sort(times.begin(), times.end());

        cout << "Instancia " << caso++ << endl;
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                cout << " ";
            }
            cout << times[i].numero;
        }
        cout << endl;
    }

    return 0;
}