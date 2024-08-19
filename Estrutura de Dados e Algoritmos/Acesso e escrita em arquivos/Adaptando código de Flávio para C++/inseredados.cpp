#include <iostream>
#include <fstream>
#include <cstring>
#include "tiposArquivo.h"

using namespace std;

int main() {
    fstream file;

    // Abre o arquivo para leitura e escrita no modo binário
    file.open("dados", ios::binary | ios::in | ios::out);
    if (!file.is_open()) {
        cerr << "Erro na abertura do arquivo \"dados\" - Programa abortado" << endl;
        return -1;
    }

    Registro r;
    int posarq;

    cout << "Informe uma chave: ";
    cin >> r.dados.chave;
    cout << "Entre com um nome: ";
    cin >> r.dados.nome;
    cout << "Entre com uma posição do arquivo: ";
    cin >> posarq;

    cout << "Armazenando registro no arquivo ..." << endl;
    r.ocupado = true;

    // Posiciona o ponteiro de escrita na posição especificada
    file.seekp(posarq * sizeof(Registro), ios::beg);
    file.write(reinterpret_cast<char*>(&r), sizeof(Registro));

    if (file.good()) {
        cout << "Registro armazenado com sucesso" << endl;
    } else {
        cerr << "Erro no armazenamento do registro" << endl;
    }

    file.close();

    return 0;
}
