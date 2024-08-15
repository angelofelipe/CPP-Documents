#include <stdio.h>
#include <stdlib.h>

#include "tiposArquivo.h"

int main () {
    FILE *f;

    if (!(f = fopen("dados", "r+b"))) {
        printf ("Erro na abertura do arquivo \"dados\" - Programa abortado\n");
        exit(-1);
    }

    Registro r;
    r.ocupado = false;
    r.dados.chave = 2;
    r.dados.nome = "Felipe";

    return 0;
}