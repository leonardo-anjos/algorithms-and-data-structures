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

/* adicionados */
int somaDosElementos(Pilha * p) {
	int i, total = 0;
	for(i=0; i<p->topo; i++) {
		total += p->itens[i];
	}
	printf("soma = %d\n\n", total);
}

int mediaSomaDosElementos(Pilha * p) {
	int i, total = 0;
	for(i=0; i<p->topo; i++) {
		total += p->itens[i];
	}
	
	float media = (float)total / tamanho(p);
	printf("media = %.2f\n\n", media);
}

int esta_vazia(Pilha * p) {
	if (p->topo == 0) {
		printf("Pilha vazia!\n");
		return -1;
	}
}

void pilhaPar(Pilha * p) {
	int i;
	for(i=0; i<p->topo; i++) {
		if(p->itens[i]%2==0) {
			desempilhar(p);
		}
	}
	imprimir(p);
}

void pilhaImpar(Pilha * p) {
	int i;
	for(i=0; i<p->topo; i++) {
		if(p->itens[i]%2!=0) {
			desempilhar(p);
		}
	}
	imprimir(p);
}

void destruir(Pilha * p) {
	if (p != NULL) {
		free(p);
	}
}
