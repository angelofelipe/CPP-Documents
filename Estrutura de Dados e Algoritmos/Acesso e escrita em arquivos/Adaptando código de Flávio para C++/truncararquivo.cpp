#include <iostream>
#include <unistd.h>
#include <fcntl.h>

#include "tiposArquivo.h"

int main() {
    int f = open("dados", O_RDWR);
    if (f == -1) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    // CONSTANTES DA BIBLIOTECA: #include <fcntl.h>
    // O_RDONLY: Abre o arquivo apenas para leitura.
    // O_WRONLY: Abre o arquivo apenas para escrita.
    // O_RDWR: Abre o arquivo tanto para leitura quanto para escrita.
    
    // O_CREAT: Cria o arquivo se ele não existir.
    // O_TRUNC: Trunca o arquivo para zero bytes se ele já existir.
    // int fd = open("dados", O_RDWR | O_CREAT, 0644);  // Já define as permissões que o arquivo terá quando for criado. É uma função de mais baixo nível.

    // Trunca o arquivo para deixar apenas os primeiros 10 registros
    if (ftruncate(f, 10 * sizeof(Registro)) == -1) {
        perror("Erro ao truncar o arquivo");
        close(f);
        return -1;
    }

    close(f);
    return 0;
}
