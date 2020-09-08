#include "Conta.h"
#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

Conta::Conta(){
	
}

Conta::Conta(char nome[30], int numero, float saldo){
 	strcpy(this->nome, nome);
	this->numero = numero;
 	this->saldo = saldo;
}

void Conta::depositar(int valor) {
	cout << "DEPÓSITO DE: " << valor << "EFETUADO" << endl;
	this->saldo = saldo + valor;
}

void Conta::extrato() {
	cout << "Nome: " << this->nome << endl;	
	cout << "Número: " << this->numero << endl;	
	cout << "Saldo: " << this->saldo << endl;	
}
