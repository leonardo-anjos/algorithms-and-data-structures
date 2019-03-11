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

	printf("empilhando...\n");
	empilhar(p, 1);
	empilhar(p, 2);
	empilhar(p, 3);
	empilhar(p, 4);
	empilhar(p, 5);
	
	imprimir(p);
	
	printf("desempilhando...\n");
	desempilhar(p);
	desempilhar(p);
	imprimir(p);
	
	printf("tamanho da pilha p = %d\n", tamanho(p));
	printf("base da pilha p = %d\n", base(p));
	printf("topo da pilha p = %d\n", topo(p));

	printf("desempilhando...\n");
	desempilhar(p);
	desempilhar(p);
	desempilhar(p);
	desempilhar(p);

	imprimir2(p);
	
	printf("empilhando...\n");
	empilhar(p, 5);
	empilhar(p, 3);
	empilhar(p, 1);

	imprimir2(p);
	
	printf("tamanho da pilha p = %d\n", tamanho(p));
	printf("base da pilha p = %d\n", base(p));
	printf("topo da pilha p = %d\n", topo(p));
	
	destruir(p);
	
}