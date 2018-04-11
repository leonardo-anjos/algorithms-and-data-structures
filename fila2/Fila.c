#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

#define TAM_MAX 5

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

void enfileirar(Fila * f, int v) {
	if (tamanho(f) == TAM_MAX) {
		printf("Fila cheia!\n");
		return;
	}
	
	if (f->fim == TAM_MAX) {
		int i, j;
		for (i=0, j=f->inicio; j<f->fim; i++, j++) {
			f->itens[i] = f->itens[j];
		}
		
		f->inicio = 0;
		f->fim = i;
	}
	
	f->itens[f->fim++] = v;
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

//implementacoes adicionais do fila.h
int esta_vazia(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return 1;
	}
	return 0;
}

void limpar(Fila * f) {
	esta_vazia(f);
	
	int i;
	for (i=0; i<f->fim; i++) {
		f->itens[f->inicio++];
	}
	printf("Limpeza da Fila completa!\n");
	
}

void imprimir_sem_esvaziar(Fila * f) {
	int i;
	printf("[ ");
	for(i=0; i<f->fim; i++) {
		printf("%d ", f->itens[i]);
	}
	printf("]\n");
}

void imprimir_esvaziando(Fila * f) {
	int i;
	for(i=0; i<f->fim; i++) {
		printf("%d ", desenfileirar(f));
	}	
}

int ultimo(Fila * f) {
	esta_vazia(f);
	return f->itens[f->fim];	
}

void clonar(Fila * f) {
	esta_vazia(f);
	
	Fila * fclone = criar();
	
	while(tamanho(f) > 0) {
		enfileirar(fclone, desenfileirar(f));
	}
	
	imprimir_sem_esvaziar(f);
	imprimir_sem_esvaziar(fclone);
	
	destruir(fclone);	
}

void inverter (Fila * f) {
/*	int numeros[MAX] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i, aux;
 
    for (i=0; i < MAX/2; i++) {
        aux = numeros[i];
        numeros[i] = numeros[MAX-i-1];
        numeros[MAX-i-1] = aux;
    }
*/
	Fila * faux = criar();
	
	while(tamanho(f) > 0) {
		enfileirar(faux, desenfileirar(f));
	}

	int i, aux;
	while(i < (tamanho(faux)/2)) {
		aux = faux->itens[i];
		faux->itens[i] = faux->itens[TAM_MAX-i-1];
		faux->itens[TAM_MAX-i-1] = aux;
	}
	
	imprimir_sem_esvaziar(faux);
	
	destruir(faux);
}


