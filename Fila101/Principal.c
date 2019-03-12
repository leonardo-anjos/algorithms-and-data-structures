#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Fila * f = criar();
	
	enfileirar(f, 1);
	enfileirar(f, 2);
	enfileirar(f, 3);
	enfileirar(f, 4);
	// enfileirar(f, 5); // fila cheia
	
	// printf("tamanho da fila %d\n", tamanho(f));
	// printf("primeiro da fila %d\n", primeiro(f));
	// printf("ultimo da fila %d\n", ultimo(f));
	
//	printf("esta vazia? %c\n", esta_vazia(f) ? 's' : 'n');
	imprimir(f);
	
	// printf("desenfileirando... => ");
	// desenfileirar(f);
	// desenfileirar(f);
	
//	
	enfileirar(f, 3);
	imprimir(f);
//	
//	printf("tamanho da fila %d\n", tamanho(f));
//	printf("primeiro da fila %d\n", primeiro(f));
	
//	limpar(f);
//	imprimir(f);
//	printf("esta vazia? %c\n", esta_vazia(f) ? 's' : 'n');
	
//	enfileirar(f, 15);
//	enfileirar(f, 1);
//	imprimir(f);
//	printf("esta vazia? %c\n", esta_vazia(f) ? 's' : 'n');
	
	
//	printf("Primeiro: %d\n", primeiro(f));
//	printf("Elemento meio: %d\n", elemento_meio(f));
//	printf("Ultimo: %d\n", ultimo(f));
//	printf("Tamanho: %d\n", tamanho(f));

	destruir(f);
}
