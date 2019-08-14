#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

#define TAM_MAX 10

struct fila {
	int itens[TAM_MAX];
	int inicio, fim;
};

Fila * criar() {
	Fila * f = malloc(sizeof(Fila));
	f->inicio = 0;
	f->fim = 0;
	return f;
}

void destruir(Fila * f) {
	if (f != NULL) {
		free(f);
	}
}

int desenfileirar(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	}
	return f->itens[f->inicio++];
}

void enfileirar(Fila * f, int valor) {
	if (tamanho(f) == TAM_MAX) {
		printf("Fila cheia!\n");
	} 
	
	if (f->fim == TAM_MAX) {
		int i, j;
		for (i=0, j=f->inicio; j<f->fim; i++, j++) {
			f->itens[i] = f->itens[j];
		}
		f->inicio = 0;
		f->fim = i;
	}
	f->itens[f->fim++] = valor;
}

int tamanho(Fila * f) {
	return f->fim - f->inicio;
}

int primeiro(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	}	
	return f->itens[f->inicio];	
}

/* implementacoes adicionais da lista */
void imprimir(Fila * f) {
	int i;
	printf("[ ");
	for(i=0; i<f->fim; i++) {
		printf("%d ", f->itens[i]);
	}
	printf("]\n");
}

int ultimo(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	}	
	return f->itens[f->fim-1];	
}

int elemento_meio(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	} 
	
	if (tamanho(f)%2==0) {
		printf("A qtd de elementos da fila e par!\n");
	}
	
	return f->itens[tamanho(f)/2];	
}

void esta_vazia(Fila * f) {
	if(tamanho(f) == 0) {
		printf("Fila esta vazia!\n");
	} else {
		printf("Nao esta vazia!\n");
	}	
}

void limpar(Fila * f) {
	if(tamanho(f) == 0) {
		printf("Fila esta vazia!\n");
	} 
	
	int i;
	for(i=0; i<f->fim; i++) {
		desenfileirar(f);
	}
	
	esta_vazia(f);
}
