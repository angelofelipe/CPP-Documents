#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= P; j++) {
                dp[i][j] = dp[i - 1][j];
                for (int k = 1; k <= min(P, pizzas[i]); k++) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - k] + tempo[i] * k);
                }
            }
        }

        cout << dp[N][P] << " min." << endl;
    }

    return 0;
}
