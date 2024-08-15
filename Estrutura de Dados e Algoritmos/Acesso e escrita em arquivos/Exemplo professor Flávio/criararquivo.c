#include <stdio.h>
#include <stdlib.h>

#include "tiposArquivo.h"

int main () {
    FILE *f;
    printf ("Criando arquivo \"dados\" ...\n");
    // w+ -> Abre o arquivo para leitura e escrita e apaga o conteúdo
    // r+ -> Abre o arquivo para leitura e escrita mas não apaga o conteúdo
    if ((f = fopen("dados", "w+")))
        printf ("Arquivo \"dados\" criado com sucesso.\n");
    else {
        printf ("Erro na criação do arquivo \"dados\".");
        exit(-1);
    }
    
    printf ("Inicializando o arquivo ...\n");

    Registro r;
    r.ocupado = false;

    for (int i = 0; i < MTAMARQUIVO; i++) {
        fwrite (&r, sizeof(Registro), 1, f);
    }
    
    fclose(f);

    return 0;
}