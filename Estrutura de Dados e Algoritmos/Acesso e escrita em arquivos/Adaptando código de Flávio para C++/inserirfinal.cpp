#include <iostream>
#include <fstream>
#include <cstring>
#include "tiposArquivo.h"

using namespace std;

int main() {
    fstream file;

    // Abre o arquivo no modo append para leitura e escrita
    file.open("dados", ios::binary | ios::in | ios::out | ios::app);
    if (!file.is_open()) {
        cerr << "Erro na abertura do arquivo \"dados\" - Programa abortado" << endl;
        return -1;
    }

    Registro r;
    r.ocupado = true;
    r.dados.chave = 2;
    strncpy(r.dados.nome, "Felipe", sizeof(r.dados.nome) - 1);
    r.dados.nome[sizeof(r.dados.nome) - 1] = '\0';

    // Escrever o registro no final do arquivo
    file.write(reinterpret_cast<char*>(&r), sizeof(Registro));
    if (file.good()) {
        cout << "Registro armazenado com sucesso" << endl;
    } else {
        cerr << "Erro no armazenamento do registro" << endl;
    }

    file.close();

    return 0;
}
