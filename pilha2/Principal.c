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

void inverter(Pilha * p) {
	Pilha * aux = criar();
	
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	
	imprimir2(aux);
	destruir(aux);
}

int main(int argc, char *argv[]) {
	
	Pilha * p = criar();
	empilhar(p, 2);
	empilhar(p, 5);
	empilhar(p, 8);
	empilhar(p, 1);
	empilhar(p, 0);
	
	imprimir(p);
	printf("Tamanho: %d\n", tamanho(p));
	printf("Topo: %d\n", topo(p));
	somaDosElementos(p);
	
	desempilhar(p);
	desempilhar(p);
	imprimir(p);
	printf("Tamanho: %d\n", tamanho(p));
	printf("Topo: %d\n", topo(p));
	somaDosElementos(p);
	
	desempilhar(p);
	desempilhar(p);
	empilhar(p, 9);
	imprimir(p);
	printf("Tamanho: %d\n", tamanho(p));
	printf("Topo: %d\n", topo(p));
	somaDosElementos(p);
	mediaSomaDosElementos(p);
	
	desempilhar(p);
	esta_vazia(p);
	imprimir2(p);
	printf("\n");
	
	empilhar(p, 7);
	empilhar(p, 9);
	empilhar(p, 55);
	imprimir2(p);
	inverter(p);
	
	pilhaPar(p);
	
	destruir(p);
}

