#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "tiposArquivo.h"

int main () {
    FILE *f;
    long file_size;
    int num_records;
    int bytes_per_register;

    if (!(f = fopen("dados", "rb+"))) {
        printf ("Erro na abertura do arquivo \"dados\" - Programa abortado\n");
        exit(-1);
    }

    // Vá para o final do arquivo para determinar o tamanho
    fseek(f, 0, SEEK_END);
    file_size = ftell(f);  // ftell retorna a posição atual, que no final é o tamanho do arquivo
    rewind(f);  // Retorna para o início do arquivo

    // Calcular o número de registros
    num_records = file_size / sizeof(Registro);
    bytes_per_register = file_size / num_records;
    printf ("Tamanho do arquivo: %ld\nQuantidade de registros: %d\nTamanho de um registro (bytes): %d\n\n", file_size, num_records, bytes_per_register);

    Registro r;

    for (int i = 0; i < num_records; i++) {
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