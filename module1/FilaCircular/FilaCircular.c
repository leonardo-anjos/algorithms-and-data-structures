#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

#define TAM_MAX 5

struct fila {
	int itens[TAM_MAX];
	int ini, fim;
};

Fila * criar() {
	Fila * f = malloc(sizeof(Fila));
	f->ini = 0;
	f->fim = 0;
	return f;	
}

void destruir(Fila * f) {
	if (f != NULL) {
		free(f);
	}
}

int desenfileirar(Fila * f) {
	int v;
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	}
	v = f->itens[f->ini];
	f->ini = f->ini == TAM_MAX-1 ? 0 : f->ini+1;
	return v;
}

void enfileirar(Fila * f, int v) {
	if (tamanho(f) == TAM_MAX-1) {
		printf("Fila cheia!\n");
		return;
	}
	f->itens[f->fim] = v;
	f->fim = f->fim == TAM_MAX-1 ? 0 : f->fim+1;
}

int tamanho(Fila * f) {
	return f->fim > f->ini ? 
	  f->fim - f->ini : 
	  TAM_MAX - f->ini + f->fim;
}

int primeiro(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	}	
	return f->itens[f->ini];	
}


void imprimir(Fila * f) {
	int i;
	printf("[ ");
	for (i=f->ini; i!=f->fim; i = i==TAM_MAX-1 ? 0 : i+1) {
		printf("%d ", f->itens[i]);
	}
	printf("]\n");
}

int maior(Fila * f) {
	int i, mv;
	for (i=f->ini, mv=f->itens[i]; i!=f->fim; i = i == TAM_MAX-1 ? 0 : i+1) {
		if (f->itens[i] > mv) {
			mv=f->itens[i];
		}
	}
	return mv;
}

void inverter (Fila * f) {
	int i, j, k, aux, trocas = tamanho(f)/2;
	i = f->ini;
	j = f->fim == 0 ? TAM_MAX-1 : f->fim-1;
	k = 0;
	while (k < trocas) {
		aux = f->itens[i];
		f->itens[i] = f->itens[j];
		f->itens[j] = aux;
		i = i==TAM_MAX-1 ? 0 : i+1;
		j = j==0 ? TAM_MAX-1 : j-1;
		k++;
	}
}

/*
void limpar(Fila * f) {
	Fila * faux = criar();
	
	while(tamanho(f) > 0) {
		enfileirar(f, faux);
	}
	
	esta_vazia(faux);
}
*/

int esta_vazia(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
	} else {
		imprimir(f);
	}	
}

int ultimo(Fila * f) {
	if (tamanho(f) == 0) {
		printf("Fila vazia!\n");
		return -1;
	}	
	return f->itens[f->fim-1];
}

int menor(Fila * f) {
	int i, mv;
	for (i=f->ini, mv=f->itens[i]; i!=f->fim; i = i == TAM_MAX-1 ? 0 : i+1) {
		if (f->itens[i] < mv) {
			mv=f->itens[i];
		}
	}
	return mv;
}

int soma(Fila * f) {
	int i, mv, total=0;
	for (i=f->ini, mv=f->itens[i]; i!=f->fim; i = i == TAM_MAX-1 ? 0 : i+1) {
		//mv=f->itens[i];
		total += f->itens[i];
	}
	return total;
}

float media(Fila * f) {
	int i, mv, total=0;
	for (i=f->ini, mv=f->itens[i]; i!=f->fim; i = i == TAM_MAX-1 ? 0 : i+1) {
		//mv=f->itens[i];
		total += f->itens[i];
	}
	
	float media = 0;
	media = total / tamanho(f);
	return media;
	
}
