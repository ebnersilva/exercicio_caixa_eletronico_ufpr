#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "ContaComum.h"
#include "ContaPoupanca.h"

using namespace std;

int main(int argc, char** argv) {
	ContaComum cc1();
	
	// cc1.extrato();
	
	// cc1.depositar(500);
	
	// cc1.extrato();
	
	
	ContaPoupanca cp1("Ebner Matias da silva", 196680, 200, "24/10/1995");
	
	cp1.extrato();
	
	cp1.depositar(1000);
	
	cp1.extrato();
	
	
	
	return 0;
}
