#include "Refei��o.h"
#include<iostream>
#include<locale>
#include<string>
#include <Windows.h>
HANDLE hConsoleR = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

void novaMeal(LLRefei��es *pratos) {//vai receber os dados do utilizador para uma nova refei��o
	LLRefei��es::refei��o *meal = new LLRefei��es::refei��o();
	SetConsoleTextAttribute(hConsoleR, 240);
	cout << "***** REFEI��O NOVA *****" << endl;
	SetConsoleTextAttribute(hConsoleR, 15);
	cout << "A cantina EDA necessita de uma nova refei��o" << endl;
	SetConsoleTextAttribute(hConsoleR, 176); 
	cout << "\t1. Introduza a entrada:";
	getline(cin, meal->entrada);
	cout << "\t2. Introduza o prato principal:";
	getline(cin, meal->pratoMain);
	cout << "\t3. Introduza o pre�o:";
	cin >> meal->custo;
	SetConsoleTextAttribute(hConsoleR, 15);
	insereFimRefei��es(pratos, meal);
}

bool listaVaziaRefei��es(LLRefei��es*ll) {
	if (ll->primeira != NULL) {
		return false;
	}
	return true;
}

void insereFimRefei��es(LLRefei��es* ll, LLRefei��es::refei��o *r) {
	r->seguinte = NULL;
	if (!listaVaziaRefei��es(ll)) {
		ll->atual->seguinte = r;
		ll->atual = r;
		return;
	}
	ll->primeira = r;
	ll->atual = r;
	return;
}


void escreveMeal(LLRefei��es*ll) {//escreve a refei��o atual
	SetConsoleTextAttribute(hConsoleR, 240);
	cout << "Refei��o atual:" << endl;
	SetConsoleTextAttribute(hConsoleR, 176);
	cout << "\tEntrada: " << ll->atual->entrada << endl;
	cout << "\tPrato Principal: " << ll->atual->pratoMain << endl;
	cout << "\tCusto:" << ll->atual->custo << " EUR" << endl << endl;
	SetConsoleTextAttribute(hConsoleR, 15);
}

void escreveTodasRefei��es(LLRefei��es*ll) {
	LLRefei��es::refei��o*itera = ll->primeira;
	int i = 1;
	while (itera != NULL) {
		SetConsoleTextAttribute(hConsoleR, 240);
		cout << i++ << "� refei��o:" << endl;
		SetConsoleTextAttribute(hConsoleR, 176);
		cout << "\tEntrada: " << ll->atual->entrada << endl;
		cout << "\tPrato Principal: " << ll->atual->pratoMain << endl;
		cout << "\tCusto:" << ll->atual->custo << " EUR" << endl << endl;
		SetConsoleTextAttribute(hConsoleR, 15);
		itera = itera->seguinte;
	}
	delete itera;
}