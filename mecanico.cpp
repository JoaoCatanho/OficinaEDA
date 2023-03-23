#include "Inicialização.h"
#include <iostream>
#include "mecanico.h"

using namespace std;

float PrecoReparacao(Mecanico* mec, float tempo){
    float preco = mec->dia * tempo; // calcula o custo com base no tempo(dias (a cada ciclo))
    return preco;
}

void Inserirnome(Mecanico* mec) {
    char* nome = new char[150]; // cria uma quantidade de bites para escrever o numero
    cout << "Insira o nome do Mecanico: " << endl;
    cin.getline(nome, 150); // para o utilizador poder escrever o nome
    mec->nome = nome;
    delete[] nome; // o resto que sobrou do espaço do array é eliminado

}






