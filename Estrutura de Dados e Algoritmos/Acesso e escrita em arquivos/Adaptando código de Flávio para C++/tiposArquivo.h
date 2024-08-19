#ifndef TIPOS_ARQUIVO_H
#define TIPOS_ARQUIVO_H

#include <cstring>

constexpr int MTAMARQUIVO = 10;
constexpr int MTAMNOME = 20;

struct DadosUsuario {
    int chave;
    char nome[MTAMNOME];
};

struct Registro {
    bool ocupado;
    DadosUsuario dados;
};

#endif // TIPOS_ARQUIVO_H
