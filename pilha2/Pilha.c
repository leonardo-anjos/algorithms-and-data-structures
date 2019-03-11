// implementacao concreta da tad

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int tamanho(Pilha * p) {
	return p->topo;
}

//void inverter2(Pilha * p) {
//	int inicioP, fimP, aux;
//	
//	for(inicioP=0, fimP=p->topo-1; inicioP<fimP; inicioP++, fimP--) {
//		aux = p->itens[inicioP];
//		p->itens[inicioP] = p->itens[fimP];
//		p->itens[fimP] = aux;
//	}
//}

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

int desempilhar(Pilha * p) {
	if (p->topo == 0) {
		printf("Pilha vazia!\n");
		return -1;
	}
	return p->itens[--p->topo];
}

int eh_igual(Pilha * p1, Pilha * p2) {
	int i;
	
	if(tamanho(p1) != tamanho(p2)) {
		return 0;
	}
	
	for(i=0; i<p1->topo; i++) {
		if(p1->itens[i] != p2->itens[i]) {
			return 0;
		}
		return 1;
	}
}

void clonar(Pilha * p) {
	imprimir(p);
	
	Pilha * aux = criar();
	Pilha * clone = criar();
	
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	
	while(tamanho(aux) > 0) {
		empilhar(clone, desempilhar(aux));
	}
	
	printf("pilha clone: ");
	imprimir(clone);
	
	destruir(clone);	
}

void destruir(Pilha * p) {
	if (p != NULL) {
		free(p);
	}
}

