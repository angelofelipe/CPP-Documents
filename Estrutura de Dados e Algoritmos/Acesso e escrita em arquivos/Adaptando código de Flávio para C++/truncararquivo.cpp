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

    // Trunca o arquivo para deixar apenas os primeiros 10 registros
    if (ftruncate(f, 10 * sizeof(Registro)) == -1) {
        perror("Erro ao truncar o arquivo");
        close(f);
        return -1;
    }

    close(f);
    return 0;
}
