#include <iostream>
#include <fstream>
#include <cstring>
#include "tiposArquivo.h"

using namespace std;

int main() {
    fstream file;
    streampos file_size;
    int num_records;
    int bytes_per_register;

    file.open("dados.db", ios::in | ios::out | ios::binary);
    if (!file.is_open()) {
        cerr << "Erro na abertura do arquivo \"dados\" - Programa abortado" << endl;
        return -1;
    }

    // Vá para o final do arquivo para determinar o tamanho
    file.seekg(0, ios::end);
    file_size = file.tellg(); // tellg() retorna a posição atual, que no final é o tamanho do arquivo
    file.seekg(0, ios::beg);  // Retorna para o início do arquivo

    // Calcular o número de registros
    num_records = file_size / sizeof(Registro);
    bytes_per_register = file_size / num_records;
    cout << "Tamanho do arquivo: " << file_size << endl;
    cout << "Quantidade de registros: " << num_records << endl;
    cout << "Tamanho de um registro (bytes): " << bytes_per_register << endl << endl;

    Registro r;

    for (int i = 0; i < num_records; i++) {
        file.read(reinterpret_cast<char*>(&r), sizeof(Registro));
        cout << "Registro: " << i << endl;
        if (r.ocupado) {
            cout << "Ocupado: sim" << endl;
            cout << "Chave: " << r.dados.chave << endl;
            cout << "Nome: " << r.dados.nome << endl;
        } else {
            cout << "Ocupado: não" << endl;
        }
        cout << endl;
    }
    
    file.close();

    return 0;
}
