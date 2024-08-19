#include <iostream>
#include <fstream>
#include <cstring>
#include "tiposArquivo.h"

using namespace std;

int main() {
    fstream file;
    cout << "Criando arquivo \"dados\" ..." << endl;
    
    // Abre o arquivo para leitura e escrita, apaga o conteúdo se o arquivo já existir
    file.open("dados", ios::binary | ios::in | ios::out | ios::trunc);
    
    if (file.is_open()) {
        cout << "Arquivo \"dados\" criado com sucesso." << endl;
    } else {
        cerr << "Erro na criação do arquivo \"dados\"." << endl;
        return -1;
    }
    
    cout << "Inicializando o arquivo ..." << endl;

    Registro r;
    r.ocupado = false;
    memset(&r.dados, 0, sizeof(DadosUsuario)); // Limpa os dados para garantir que estejam zerados

    for (int i = 0; i < MTAMARQUIVO; i++) {
        file.write(reinterpret_cast<char*>(&r), sizeof(Registro));
    }
    
    file.close();

    return 0;
}
