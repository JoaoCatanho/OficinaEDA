#ifndef OFICINAEDA_ET_H
#define OFICINAEDA_ET_H

struct ETs {
    int capacidadeCarros;
    struct mecanico {
        std::string nome;
        float precoReparacao;
        std::string marcaEspecializada;
        int preco;
    };
};

void CriarET(ETs*);
#endif //OFICINAEDA_ET_H
