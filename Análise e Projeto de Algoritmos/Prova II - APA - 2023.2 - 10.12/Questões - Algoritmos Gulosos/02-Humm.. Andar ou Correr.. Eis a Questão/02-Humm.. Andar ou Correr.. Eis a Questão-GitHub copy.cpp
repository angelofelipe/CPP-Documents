#include <stdio.h>
#include <stdlib.h>
int velocidades[100001];
int cmp(const void * a, const void * b) { return (* ( int* ) a - * ( int* ) b); }
int main ( int argc, char *argvetor[] ) {
    int testes, qtdVelocidades, correrEmS;
    double aceleração, answer;
 
    scanf("%d", &testes);
    while (testes--) {
        answer = 0.0;
        scanf("%d%d%lf", &qtdVelocidades, &correrEmS, &aceleração);
        for (int i = 0; i < qtdVelocidades; i++)
            scanf("%d", &velocidades[i]);
        qsort(velocidades, qtdVelocidades, sizeof(int), cmp);
        for (int i = 0; i < correrEmS; i++)
            answer += 1.0 / ((double) velocidades[i] * 1.0 + aceleração * 1.0);
 
        for (int i = correrEmS; i < qtdVelocidades; i++)
            answer += 1.0 / ((double) velocidades[i] * 1.0);
 
        printf("%.2lf\n", answer);
    }
 
    return 0;
}