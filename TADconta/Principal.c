#include <stdio.h>
#include <stdlib.h>
#include "Conta.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Conta * c1 = criar("leonardo");
	creditar(c1, 1000);
	debitar(c1, 300);
	printf("Saldo c1: %.2f\n", saldo(c1));
	destruir(c1);
	
/*	c2 = c1;
	
	creditar(c1, 1000);
	debitar(c1, 300);
	
	printf("Saldo c1: %.2f\n", saldo(c1));
	
	debitar(c2, 300);
	creditar(c2, 1000);
	printf("Saldo c2: %.2f\n", saldo(c2));	
	
	destruir(c1);
	destruir(c2);
*/
}

