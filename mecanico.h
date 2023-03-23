#include <iostream>
#include <locale>
#include <string>

using namespace std;

#ifndef OFICINAEDA_MECANICO_H
#define OFICINAEDA_MECANICO_H

class string;

// struct do mecanico
struct Mecanico {
    std::string nome;
    float precoReparacao;
    std::string marcaEspecializada;
    float dia;
    float tempo;
};

void Inserirnome(Mecanico* mec);
float PrecoReparacao(float precoReparacao);
#endif //OFICINAEDA_MECANICO_H
