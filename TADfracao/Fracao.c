#include<stdio.h>
#include<stdlib.h>
#include "Fracao.h"

struct fracao {
	float numerador;
	float denominador;
};

Fracao * criar(float numerador, float denominador) {
	Fracao * f = malloc(sizeof(Fracao));
	f->numerador = numerador;
	f->denominador = denominador;
	return f;
};

float numerador(Fracao * f) {
	return f->numerador;
};

float denominador(Fracao * f) {
	return f->denominador;
};

float divisao(Fracao * f) {
	if(denominador != 0) {
		return f->numerador / f->denominador;
	} else {
		return NULL;
	}
	
};

void imprimir(Fracao * f) {
	printf("numerador = %.2f\n", f->numerador);
	printf("denominador = %.2f\n", f->denominador);
};

void destruir(Fracao * f) {
	if(f != NULL) {
		free(f);
	}
};

