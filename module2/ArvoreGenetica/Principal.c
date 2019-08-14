#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

int main(int argc, char *argv[]) {
	
	Arvore *a = criar();

	imprimir(a);
	printf("qdts de nos da arvore: %d\n", contar_nos(a));
	printf("altura da arvore: %d\n", altura(a));
	destruir(a);
	
	return 0;
}
