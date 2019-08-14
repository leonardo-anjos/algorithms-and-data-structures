#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Fila * f = criar();
	enfileirar(f, 8);
	enfileirar(f, 1);
	enfileirar(f, 0);
	enfileirar(f, 3);
	
	imprimir(f);
	printf("Primeiro: %d\n", primeiro(f));
	printf("Elemento meio: %d\n", elemento_meio(f));
	printf("Ultimo: %d\n", ultimo(f));
	printf("Tamanho: %d\n", tamanho(f));

	destruir(f);
	
	return 0;
}


