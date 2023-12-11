#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define maxn 1000

int linhasPiramide, MATRIX[maxn][maxn];
int somas[maxn][maxn + 1];
long long memoria[maxn][maxn];
bool feito[maxn][maxn];

long long solve(int r, int c){
    if(r == linhasPiramide) return 0;
    long long &ret = memoria[r][c];
    
    if(!feito[r][c]){
        feito[r][c] = true;
        ret = 0;
        
        if(c > 0) ret = max(ret,solve(r,c - 1));
        ret = max(ret,solve(r + 1,min(linhasPiramide - 2 - r,c)) + somas[r][c + 1]);
    }
    
    return ret;
}

int main(){
    while(true){
        scanf("%d",&linhasPiramide);
        if(linhasPiramide == 0) break;
        
        for(int i = 0;i < linhasPiramide;++i)
            for(int j = 0;j <= i;++j)
                scanf("%d",&MATRIX[j][i - j]);
        
        for(int i = 0;i < linhasPiramide;++i)
            for(int j = 0;j < linhasPiramide - i;++j)
                somas[i][j + 1] = MATRIX[i][j] + somas[i][j];
        
        memset(feito,false,sizeof feito);
        printf("%lld\n",solve(0,linhasPiramide - 1));
    }
    
    return 0;
}