#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int NC;
    cin >> NC;

    for (int i = 0; i < NC; i++) {

        int N;
        cin >> N;

        vector<int> alturas(N);

        for (int j = 0; j < N; j++) {
            cin >> alturas[j];
        }

        sort(alturas.begin(), alturas.end());

        for (int j = 0; j < N; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << alturas[j];
        }

        cout << endl;
    }

    return 0;
}
