#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main() {
	Fila * f = criar();
	enfileirar(f, 8);
	enfileirar(f, 1);
	enfileirar(f, 0);
	enfileirar(f, 3);
	
	imprimir(f);
	printf("Primeiro: %d\n", primeiro(f));
	printf("Tamanho: %d\n", tamanho(f));

	destruir(f);
}

