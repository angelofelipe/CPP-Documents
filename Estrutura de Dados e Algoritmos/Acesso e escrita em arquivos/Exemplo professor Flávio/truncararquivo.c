#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "tiposArquivo.h"

int main() {
    int fd = open("dados", O_RDWR);
    if (fd == -1) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    // Trunca o arquivo para os primeiros 10 registros
    if (ftruncate(fd, 10 * sizeof(Registro)) == -1) {
        perror("Erro ao truncar o arquivo");
        close(fd);
        return -1;
    }

    close(fd);
    return 0;
}
