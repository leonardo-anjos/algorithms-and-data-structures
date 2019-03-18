#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void imprimir2(Pilha * p) {
	Pilha * aux = criar();
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	printf("[ ");	
	while(tamanho(aux) > 0) {
		int v = desempilhar(aux);
		printf("%d ", v);
		empilhar(p, v);
	}
	printf("]\n");
	destruir(aux);
}

int main(int argc, char *argv[]) {

	Pilha * p = criar();

	empilhar(p, 10);
	empilhar(p, 3);
	empilhar(p, 8);
	empilhar(p, 5);
	
	imprimir2(p);

	printf("topo = %d\n", topo(p));

	destruir(p);

}