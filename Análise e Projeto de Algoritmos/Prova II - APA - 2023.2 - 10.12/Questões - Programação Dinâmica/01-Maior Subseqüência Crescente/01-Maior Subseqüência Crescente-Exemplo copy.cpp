#include <algorithm>
#include <cstdio>
using namespace std;
const int MAXN = 610;
int matrix[MAXN][MAXN], index[MAXN][MAXN], maxColun[MAXN], dp[MAXN], answer,
    N, M;
int main() {
    while (scanf("%d %d", &N, &M) && (N || M)) {
        for (int i = 1; i <= M; i++) maxColun[i] = 1;
        for (int i = 1; i <= N; i++) {
            scanf("%d", &matrix[i][1]);
            index[i][1] = 1;
            for (int j = 2; j <= M; j++) {
                scanf("%d", &matrix[i][j]);
                if (matrix[i][j] > matrix[i][j - 1]) {
                    index[i][j] = index[i][j - 1];
                    maxColun[j] =
                        max(maxColun[j], j - index[i][j] + 1);
                } else {
                    index[i][j] = j;
                }
            }
        }
        answer = 0;
        for (int coluna_ini = 1; coluna_ini <= M; coluna_ini++) {
            for (int coluna_fim = M; coluna_fim >= coluna_ini; coluna_fim--) {
                int tam = coluna_fim - coluna_ini + 1;
                if (tam > maxColun[coluna_fim]) continue;
                if (tam * M <= answer) continue;
                if (index[1][coluna_fim] <= coluna_ini) {
                    dp[1] = 1;
                } else {
                    dp[1] = 0;
                }
                answer = max(dp[1] * tam, answer);
                for (int linha = 2; linha <= N; linha++) {
                    if (matrix[linha][coluna_ini] >
                        matrix[linha - 1][coluna_fim]) {
                        dp[linha] = dp[linha - 1];
                    } else {
                        dp[linha] = 0;
                    }
                    if (index[linha][coluna_fim] <= coluna_ini) {
                        dp[linha]++;
                    } else {
                        dp[linha] = 0;
                    }
                    answer = max(dp[linha] * tam, answer);
                }
            }
        }
        printf("%d\n", answer);
    }
    return 0;
}

