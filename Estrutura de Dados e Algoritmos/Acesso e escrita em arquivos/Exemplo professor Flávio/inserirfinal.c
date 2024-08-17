#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tiposArquivo.h"

int main () {
    FILE *f;

    if (!(f = fopen("dados", "r+b"))) {
        printf ("Erro na abertura do arquivo \"dados\" - Programa abortado\n");
        exit(-1);
    }

    Registro r;
    r.ocupado = true;
    r.dados.chave = 2;
    strncpy(r.dados.nome, "Felipe", sizeof(r.dados.nome) - 1);
    r.dados.nome[sizeof(r.dados.nome) - 1] = '\0';

    fseek(f, -1*sizeof(Registro), SEEK_END);
    if (fwrite(&r, sizeof(Registro), 1, f) == 1)
        printf("Registro armazenado com sucesso\n");
    else {
        printf("Erro no armazenamento do registro\n");
        perror("Error");
    }

    fclose(f);



    return 0;
}