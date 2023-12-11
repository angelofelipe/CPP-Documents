#include <stdio.h>
#include <stdlib.h>

int andares[100000];

int cmp(const void * a, const void * b) { return (* ( int* ) b - * ( int* ) a); }

int main(int argc, char const *argv[]) {
    int testes, totalAndares, pessoas, qtdAndares, answer;
 
    scanf("%d", &testes);
    while(testes--) {
        answer = 0;
        scanf("%d%d%d", &totalAndares, &pessoas, &qtdAndares);
        for (int i = 0; i < qtdAndares; i++)
            scanf("%d", &andares[i]);
        qsort(andares, qtdAndares, sizeof (int), cmp);
 
        for(int i = 0; i < qtdAndares; i += pessoas)
            answer += andares[i] * 2;
 
        printf("%d\n", answer);
    }
 
    return 0;
}