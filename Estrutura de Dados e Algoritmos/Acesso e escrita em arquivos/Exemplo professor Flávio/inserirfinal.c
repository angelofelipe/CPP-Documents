#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tiposArquivo.h"

int main () {
    FILE *f;

    if (!(f = fopen("dados", "ab+"))) {
        printf ("Erro na abertura do arquivo \"dados\" - Programa abortado\n");
        exit(-1);
    }

    Registro r;
    r.ocupado = true;
    r.dados.chave = 2;
    strncpy(r.dados.nome, "Felipe", sizeof(r.dados.nome) - 1);
    r.dados.nome[sizeof(r.dados.nome) - 1] = '\0';

    // Funções para realocar o ponteiro de leitura e escrita no arquivo
    // fseek(f, -1*sizeof(Registro), SEEK_END);  // aponta para o último registro armazenado
    // fseek(f, 0*sizeof(Registro), SEEK_END);   // aponta pra o último registro +1, basicamente abrir o arquivo no modo append é fazer este seek
    if (fwrite(&r, sizeof(Registro), 1, f) == 1)
        printf("Registro armazenado com sucesso\n");
    else {
        printf("Erro no armazenamento do registro\n");
        perror("Error");
    }

    fclose(f);

    return 0;
}
