#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

//void imprimir2(Pilha * p) {
//	Pilha * aux = criar();
//	while(tamanho(p) > 0) {
//		empilhar(aux, desempilhar(p));
//	}
//	printf("[ ");	
//	while(tamanho(aux) > 0) {
//		int v = desempilhar(aux);
//		printf("%d ", v);
//		empilhar(p, v);
//	}
//	printf("]\n");
//	destruir(aux);
//}

void inserir_base(Pilha * p, int v) {
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

void inverter(Pilha * p) {
	Pilha * aux = criar();
	Pilha * aux2 = criar();
	
//	p -> aux
	while(tamanho(p) > 0) {
		empilhar(aux, desempilhar(p));
	}
	
//	aux -> aux2
	while(tamanho(aux) > 0) {
		empilhar(aux2, desempilhar(aux));
	}
	
//	aux2 -> p
	while(tamanho(aux2) > 0) {
		empilhar(p, desempilhar(aux2));
	}
	
	destruir(aux);
	destruir(aux2);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Pilha * p = criar();
	Pilha * p2 = criar();
	
	empilhar(p, 3);
	empilhar(p, 2);
	empilhar(p, 1);
	
//	imprimir(p);
//	printf("topo = %d\n", topo(p));
//	printf("tamanho = %d\n\n", tamanho(p));
	
//	inserir_base(p, 0);
	
//	imprimir(p);
//	printf("topo = %d\n", topo(p));
//	printf("tamanho = %d\n\n", tamanho(p));
	
//	printf("pilha invertida\n");
//	inverter(p);
//	imprimir(p);
//	printf("topo = %d\n", topo(p));
//	printf("tamanho = %d\n", tamanho(p));
	
//	desempilhar(p);
//	desempilhar(p);
//	
//	imprimir(p);
//	printf("topo = %d\n", topo(p));
//	printf("tamanho = %d\n", tamanho(p));

	empilhar(p2, 4);
	empilhar(p2, 5);
	empilhar(p2, 8);
	empilhar(p2, 5);
	empilhar(p2, 0);

	imprimir(p);
	imprimir(p2);

//	printf("%d\n", eh_igual(p, p2));
	
//	imprimir(p);
//	printf("topo = %d\n", topo(p));
//	printf("tamanho = %d\n", tamanho(p));
//	
//	desempilhar(p);
//	desempilhar(p);
//	desempilhar(p);
//	desempilhar(p);
//	desempilhar(p);
//	desempilhar(p);
//	
//	printf("tamanho = %d\n", tamanho(p));
//	printf("topo = %d\n", topo(p));
//	printf("tamanho = %d\n", tamanho(p));
	
//	inverter(p1);
//	inverter2(p1);
//	imprimir2(p2);
	
	printf("%d\n", eh_igual(p, p2));
//	printf("As pilhas sao iguais? %c", eh_igual(p, p2) ? 's' : 'n');
	
	Pilha * p_clone = criar();
	
	empilhar(p_clone, 9);
	empilhar(p_clone, 8);
	empilhar(p_clone, 7);
	
	clonar(p_clone);
		
	destruir(p);
	
}
