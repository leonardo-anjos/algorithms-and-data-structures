#include<stdio.h>
#include<stdlib.h>
#include "Pilha.h"

#define TAM_MAX 5

struct pilha {
  /* data */
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

int desempilhar(Pilha * p) {
	if (p->topo == 0) {
		printf("Pilha vazia!\n");
		return -1;
	}
	return p->itens[--p->topo];
}

void empilhar(Pilha * p, int valor) {
	if (p->topo == TAM_MAX) {
		printf("Pilha cheia!\n");
		return;
	}
	p->itens[p->topo++] = valor;	
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

void retirar_base(Pilha * p) {
  Pilha * aux = criar();
	
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}

	desempilhar(aux);

	while(tamanho(aux) > 0) {
		empilhar(p, desempilhar(aux));
	}

  printf("base removida -> ");
  imprimir(p);
	destruir(aux);	
}

