#include "ContaPoupanca.h"
#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

ContaPoupanca::ContaPoupanca(){
	
};

ContaPoupanca::ContaPoupanca(char nome[30], int numero, float saldo, char aniversario[10]):Conta::Conta(nome, numero, saldo) {
	strcpy(this->nome, nome);
	this->numero = numero;
 	this->saldo = saldo; 
 	strcpy(this->aniversario, aniversario);
};

void ContaPoupanca::extrato() {
	cout << "########   EXTRATO CONTA POUPANÇA  ############"<< endl;
	Conta::extrato();
	cout << "Data de aniversário: " << this->aniversario << endl;	
	cout << endl;
	cout << "##############   FIM EXTRATO  #################"<< endl;
	system("pause");
	system("cls");
};
