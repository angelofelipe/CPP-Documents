#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, P;

    while (true) {
        cin >> N;
        if (N == 0) break;

        cin >> P;

        vector<int> tempo(N + 1);
        vector<int> pizzas(N + 1);

        for (int i = 1; i <= N; i++) {
            cin >> tempo[i] >> pizzas[i];
        }

        vector<vector<int>> dp(N + 1, vector<int>(P + 1, 0));
        vector<vector<int>> qtd(N + 1, vector<int>(P + 1, 0));

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= P; j++) {
                dp[i][j] = dp[i - 1][j];
                qtd[i][j] = qtd[i - 1][j];
                if (pizzas[i] <= P){
                    for (int k = 1; k <= min(P, pizzas[i]); k++){
                        int previous_i = dp[i][j];
                        int current_i = dp[i - 1][j - k] + tempo[i];
                        if (previous_i == max(previous_i, current_i)){
                            dp[i][j] = previous_i;
                            qtd[i][j] = qtd[i][j];
                        }else{
                            int deliveriesInScope = qtd[i - 1][j - k] + pizzas[i];
                            if (deliveriesInScope <= P){
                                dp[i][j] = current_i;
                                qtd[i][j] = deliveriesInScope;
                            }
                        }
                    }
                }
                imprimirMatriz(dp);
                cout << endl;
            }
        }

        cout << dp[N-1][P-1] << " min." << endl;
    }

    return 0;
}
