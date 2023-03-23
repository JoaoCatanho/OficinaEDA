#include <iostream>
#include "Gestão.h"
#include "Inicialização.h"
#include "mecanico.h"

using namespace std;

// Estações de trabalho
// Cada uma tem o seu mecanico chefe
// Cada estação de trabalho tem o mecanico com a sua propria marca


int main() {
    int numets;
    std::cout <<".....OficinaEDA.....\n"<< std::endl;
    cout<<"Insira o numero de ET's"<<endl;
    cin>>numets;
    Mecanico *mec;
    Inserirnome(mec);
    PrecoReparacao(Mecanico * mec, float tempo);

    return 0;
}

