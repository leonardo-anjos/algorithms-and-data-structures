#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

#define TAM_MAX 4

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

void enfileirar(Fila * f, int valor) {
	if (tamanho(f) == TAM_MAX) {
		printf("Fila cheia!\n");
	} 

	//	testa se esta colado no fim do array -> implementacao MURILO
	if (f->fim == TAM_MAX) {
		int i;
		for (i=0; i<tamanho(f); i++) {
			f->itens[i] = f->itens[f->inicio+i];
		}
		f->inicio = 0;
		f->fim = tamanho(f);
	}
	f->itens[f->fim++] = valor;
}

int desenfileirar(Fila * f) {
	if (f->inicio == f->fim) {
		printf("Fila vazia!\n");
		return -1;
	}
	return f->itens[f->inicio++];
}

int tamanho(Fila * f) {
	return f->fim - f->inicio;
}

int primeiro(Fila * f) {
	if (f->inicio == f->fim) {
		printf("Fila vazia!\n");
		return -1;
	}
	return f->itens[f->inicio];	
}

int ultimo(Fila * f) {
	return f->itens[f->fim];	
}

int esta_vazia(Fila * f) {
	if(tamanho(f) == 0) {
		return 1;
	} 
	return 0;	
}

void limpar(Fila * f) {
	printf("\nlimpando...\n");
	
	if(tamanho(f) == 0) {
		printf("Fila vazia!\n");
	} 
	
	while(tamanho(f) != 0) {
		desenfileirar(f);
	}
	
	esta_vazia(f);
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