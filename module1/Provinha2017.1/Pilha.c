#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

#define TAM_MAX 5

struct pilha{
	int itens[TAM_MAX];
	int topo;
};

Pilha * criar() {
	Pilha * p = malloc(sizeof(Pilha));
	p->topo = 0;
	return p;
}

void empilhar(Pilha * p, int valor) {
	if (p->topo == TAM_MAX) {
		printf("Pilha cheia!\n");
	}
	p->itens[p->topo++] = valor;	
}

int desempilhar(Pilha * p) {
	if (p->topo == 0) {
		printf("Pilha vazia!\n");
		return -1;
	}
	return p->itens[--p->topo];
}

int tamanho(Pilha * p) {
	return p->topo;
}

int topo(Pilha * p) {
	if (p->topo == 0) {
		printf("Pilha vazia!\n");
		return -1;
	}
	return p->itens[p->topo-1];
}

void destruir(Pilha * p) {
	if (p != NULL) {
		free(p);
	}
}

int retira_menor_topo(Pilha * p) {

}

int esta_ordenado(Pilha * p) {
	
}

