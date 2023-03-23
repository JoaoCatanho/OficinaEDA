#include <iostream>
#include"ET.h"

/*void criaOficina(ETs*numETs) {//vai gerar o tamanho da Oficina e criar ETs (3-8 ETs)
    int *Ets = new int();
    int t = 0;
    int i = 1;
    bool cria = false;
    while (t < *TCANTINA) {
        cria = true;
        int *TMESA = new int(rand() % 4 + 2);
        t += *TMESA;
        if (*TCANTINA - t <= 1 && *TCANTINA != t) {//quando isto acontece, nenhuma mesa poder� preencher o �ltimo espa�o ou j� ultrapassamos o tamanho da cantina, por isso faz-se um "reset", n�o se cria a mesa e gera-se outro tamanho de mesa
            t -= *TMESA;
            cria = false;
        }
        if (cria) {
            LLMesas::mesa*m = new LLMesas::mesa();
            LLPessoas*sentados = new LLPessoas;
            sentados->primeira = NULL;
            sentados->iterator = NULL;
            sentados->ultima = NULL;
            m->capacidade = *TMESA;
            m->numMesa = i;
            m->numSentados = 0;
            m->sentados = sentados;
            insereFimMesas(ll, m);
            i++;
        }
        delete TMESA;
    }
}*/
