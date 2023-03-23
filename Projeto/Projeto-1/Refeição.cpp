#include "Refeição.h"
#include<iostream>
#include<locale>
#include<string>
#include <Windows.h>
HANDLE hConsoleR = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

void novaMeal(LLRefeições *pratos) {//vai receber os dados do utilizador para uma nova refeição
	LLRefeições::refeição *meal = new LLRefeições::refeição();
	SetConsoleTextAttribute(hConsoleR, 240);
	cout << "***** REFEIÇÃO NOVA *****" << endl;
	SetConsoleTextAttribute(hConsoleR, 15);
	cout << "A cantina EDA necessita de uma nova refeição" << endl;
	SetConsoleTextAttribute(hConsoleR, 176); 
	cout << "\t1. Introduza a entrada:";
	getline(cin, meal->entrada);
	cout << "\t2. Introduza o prato principal:";
	getline(cin, meal->pratoMain);
	cout << "\t3. Introduza o preço:";
	cin >> meal->custo;
	SetConsoleTextAttribute(hConsoleR, 15);
	insereFimRefeições(pratos, meal);
}

bool listaVaziaRefeições(LLRefeições*ll) {
	if (ll->primeira != NULL) {
		return false;
	}
	return true;
}

void insereFimRefeições(LLRefeições* ll, LLRefeições::refeição *r) {
	r->seguinte = NULL;
	if (!listaVaziaRefeições(ll)) {
		ll->atual->seguinte = r;
		ll->atual = r;
		return;
	}
	ll->primeira = r;
	ll->atual = r;
	return;
}


void escreveMeal(LLRefeições*ll) {//escreve a refeição atual
	SetConsoleTextAttribute(hConsoleR, 240);
	cout << "Refeição atual:" << endl;
	SetConsoleTextAttribute(hConsoleR, 176);
	cout << "\tEntrada: " << ll->atual->entrada << endl;
	cout << "\tPrato Principal: " << ll->atual->pratoMain << endl;
	cout << "\tCusto:" << ll->atual->custo << " EUR" << endl << endl;
	SetConsoleTextAttribute(hConsoleR, 15);
}

void escreveTodasRefeições(LLRefeições*ll) {
	LLRefeições::refeição*itera = ll->primeira;
	int i = 1;
	while (itera != NULL) {
		SetConsoleTextAttribute(hConsoleR, 240);
		cout << i++ << "ª refeição:" << endl;
		SetConsoleTextAttribute(hConsoleR, 176);
		cout << "\tEntrada: " << ll->atual->entrada << endl;
		cout << "\tPrato Principal: " << ll->atual->pratoMain << endl;
		cout << "\tCusto:" << ll->atual->custo << " EUR" << endl << endl;
		SetConsoleTextAttribute(hConsoleR, 15);
		itera = itera->seguinte;
	}
	delete itera;
}