// https://github.com/JrSousaJ/Uri-Solved-Problems/blob/master/2446.cpp
#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;
int m,n;
const int M = 1e5+5;
const int N = 1e3 + 1;
int val[N];
int dp[2][M];

// Função para imprimir uma matriz - mas está inutilizada já que tem que coordenar alocação de memória
void imprimirMatriz(int linhas, int colunas, int **matriz[]) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++)scanf("%d",&val[i]);
    memset(dp,0,sizeof dp);
    dp[0][0]=1;
    for(int pos=1;pos<=m;pos++)
    {
        for(int troco=0;troco<=n;troco++)
        {
            dp[pos & 1][troco] = dp[!(pos & 1)][troco];

            if(troco >= val[pos])
            {
                dp[pos & 1][troco] |= dp[!(pos & 1)][troco-val[pos]];
            }
            
            // imprimindo matriz
            cout << "pos= " << pos << " troco= " << troco << endl;
            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l <= n; ++l) {
                    printf("%d ", dp[k][l]);
                }
                printf("\n");
            }
            cout << endl;

        }
    }
    printf("%c\n",dp[m & 1][n]? 'S' : 'N');
    return 0;
}
