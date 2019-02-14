#include <stdio.h>
#include <stdlib.h>
#include "Conta.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Conta * c = criar("banco do brasil");
	
	imprimir(c);
	
	destruir(c);
}

