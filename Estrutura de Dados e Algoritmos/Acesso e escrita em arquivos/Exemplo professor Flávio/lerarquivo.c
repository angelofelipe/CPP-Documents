#include <stdio.h>
#include <stdlib.h>

#include "tiposArquivo.h"

int main () {
    FILE *f;

    if (!(f = fopen("dados", "r"))) {
        printf ("Erro na abertura do arquivo \"dados\" - Programa abortado\n");
        exit(-1);
    }

    Registro r;

    for (int i = 0; i < MTAMARQUIVO; i++) {
        fread (&r, sizeof(Registro), 1, f);
        printf ("Registro: %d\n", i);
        if (r.ocupado == true){
            printf ("Ocupado: sim\n");
            printf ("Chave: %d\n", r.dados.chave);
            printf ("Nome: %s\n", r.dados.nome);
        } else
            printf ("Ocupado: não\n");
        printf ("\n");
    }
    
    fclose(f);

    return 0;
}