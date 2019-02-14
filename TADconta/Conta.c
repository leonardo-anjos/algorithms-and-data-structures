#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conta.h"

struct conta {
	char nome[20];
	float limite;
	float saldo;
};

Conta * criar(char nome) {
	Conta * c = malloc(sizeof(Conta));
	c->saldo = 0;
	c->limite = 800;
	c->nome[0]='\0';
	strcpy(c->nome, nome);
	return c;
}

void debitar(Conta * c, float valor) {
	if (valor <= (c->saldo + c->limite)) {
		c->saldo -= valor;
	}
}

void creditar(Conta * c, float valor) {
	c->saldo += valor;
}

float saldo(Conta * c) {
	return c->saldo;
}

void imprimir(Conta * c) {
	printf("Nome: %s\n", c->nome);
	printf("Saldo: %.2f\n", c->saldo);
}

void destruir(Conta * c) {
	if (c != NULL) {
		free(c);
	}
}

