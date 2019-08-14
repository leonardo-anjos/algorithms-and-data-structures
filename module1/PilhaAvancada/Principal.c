#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void imprimir2(Pilha * p) {
	Pilha * aux = criar();
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	printf("[ ");	
	while(tamanho(aux) > 0) {
		int v = desempilhar(aux);
		printf("%d ", v);
		empilhar(p, v);
	}
	printf("]\n");
	destruir(aux);
}

void inserir_base2(Pilha * p, int v) {
	Pilha * aux = criar();
	
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	
	empilhar(p, v);
	
	while(tamanho(aux) > 0) {
		empilhar(p, desempilhar(aux));
	}
	
	destruir(aux);
}

void inverter2(Pilha * p) {
	Pilha * aux = criar();
	Pilha * aux2 = criar();
	
	// p -> aux
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	
	// aux -> aux2
	while(tamanho(aux) > 0) {
		empilhar(aux2, desempilhar(aux));
	}
	
	// aux2 -> p
	while(tamanho(aux2) > 0) {
		empilhar(p, desempilhar(aux2));
	}
	
	imprimir2(p);
	
	destruir(aux);
	destruir(aux2);
}

void clonar2(Pilha * p) {
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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Pilha * p1 = criar();
	Pilha * p2 = criar();
	
	empilhar(p1, 3);
	empilhar(p1, 2);
	empilhar(p1, 1);
	
	imprimir(p1);
	printf("tamanho = %d\n", tamanho(p1));
	printf("base = %d\n", base(p1));
	printf("topo = %d\n", topo(p1));
	
	desempilhar(p1);
	desempilhar(p1);

	imprimir(p1);
	printf("tamanho = %d\n", tamanho(p1));
	printf("base = %d\n", base(p1));
	printf("topo = %d\n", topo(p1));
	
	empilhar(p1, 1);
	empilhar(p1, 4);
	empilhar(p1, 6);
	
	imprimir(p1);
	printf("tamanho = %d\n", tamanho(p1));
	printf("base = %d\n", base(p1));
	printf("topo = %d\n", topo(p1));
	
	printf("inserindo na base...\n");
	inserir_base(p1, 10);
	imprimir(p1);
	printf("tamanho = %d\n", tamanho(p1));
	printf("base = %d\n", base(p1));
	printf("topo = %d\n\n", topo(p1));
	
	imprimir(p1);

	printf("invertendo pilha... => ");
	inverter(p1);
	
	printf("\nclonando pilha...\n");
	clonar(p1);
	
	empilhar(p2, 95);
	empilhar(p2, 10);
	empilhar(p2, 36);
	empilhar(p2, 78);

	// USANDO AS IMPLEMENTAÇÕES INTERNAS...
	printf("\n");
	imprimir2(p2);

	printf("inserindo na base de p2... => ");
	inserir_base2(p2, 63);
	imprimir2(p2);

	printf("invertendo p2... => ");
	inverter2(p2);

	printf("As pilhas sao iguais? %c\n\n", eh_igual(p1, p2) ? 's': 'n');
	
	imprimir2(p2);
	printf("tamanho = %d\n", tamanho(p2));
	printf("base = %d\n", base(p2));
	printf("topo = %d\n\n", topo(p2));
	
	printf("clonando p2... => ");
	clonar2(p2);	
	
	destruir(p1);
	destruir(p2);
}
