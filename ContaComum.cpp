#include "ContaComum.h"
#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

ContaComum::ContaComum(){
	cout << "INFORME O NOME DO TITULAR DA CONTA COMUM: " << endl;
	cin.getline(this->nome, 30);
	cout << "INFORME O NÚMERO CONTA: " << endl;
	cin >> this->numero;
	cout << "INFORME O SALDO DA CONTA: " << endl;
	cin >> this->saldo;
	
	cout << "CADASTRO FINALIZADO... " << endl << endl << endl;
};

ContaComum::ContaComum(char nome[30], int numero, float saldo){
	strcpy(this->nome, nome);
	this->numero = numero;
 	this->saldo = saldo;                                                                            
};

void ContaComum::extrato() {
	cout << "EXTRATO NA CONTA CORRENTE" << endl;
	Conta::extrato();
};
