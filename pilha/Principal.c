#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void inverter(Pilha * p) {
	Pilha * aux = criar();
	Pilha * aux2 = criar();
	
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	
	while(tamanho(aux) > 0) {
		empilhar(aux2, desempilhar(aux));
	}
	
	while(tamanho(aux2) > 0) {
		empilhar(p, desempilhar(aux2));
	}
	
	destruir(aux);
	destruir(aux2);
}

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
	Pilha * p1 = criar();
	Pilha * p2 = criar();
	
	empilhar(p1, 2);
	empilhar(p1, 5);
	empilhar(p1, 8);
	empilhar(p1, 1);
	empilhar(p1, 0);
	
	empilhar(p2, 4);
	empilhar(p2, 5);
	empilhar(p2, 8);
	empilhar(p2, 5);
	empilhar(p2, 0);
	
	imprimir(p1);
	//inverter(p1);
	//inverter2(p1);
	imprimir2(p2);
	
	printf("As pilhas são iguais? %c", eh_igual(p1, p2) ? 's' : 'n');
	
	destruir(p1);
	destruir(p2);
	
}
