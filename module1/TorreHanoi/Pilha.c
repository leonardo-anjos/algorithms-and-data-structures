#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

#define TAM_MAX 10

struct pilha{
	int itens[TAM_MAX];
	int topo;
};

Pilha * criar() {
	Pilha * p = malloc(sizeof(Pilha));
	p->topo = 0;
	return p;
}

void destruir(Pilha * p) {
	if (p != NULL) {
		free(p);
	}
}

void empilhar(Pilha * p, int valor) {
	if (p->topo == TAM_MAX) {
		printf("Pilha cheia!\n");
		return;
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

void imprimir(Pilha * p) {
	int i;
	printf("[ ");
	for(i=0; i<p->topo; i++) {
		printf("%d ", p->itens[i]);
	}
	printf("]\n");
}

void inverter3(Pilha * p) {
	int i, f, tmp;
	for (i = 0, f = p->topo-1; i < f; i++, f--) {
		tmp = p->itens[i];
		p->itens[i] = p->itens[f];
		p->itens[f] = tmp;
	}
}

