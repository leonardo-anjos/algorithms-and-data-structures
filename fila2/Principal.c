#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

//implementacoes adicionais que acessam diretamente a estrutura de dados
void imprimir2(Fila * f) {
	Fila * faux = criar();
	
	while(tamanho(f) > 0) {
		enfileirar(faux, desenfileirar(f));
	}
	
	printf("[ ");	
	while(tamanho(faux) > 0) {
		int v = desenfileirar(faux);
		printf("%d ", v);
		enfileirar(f, v);
	}
	printf("]\n");
	
	destruir(faux);	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Fila * f = criar();
	
	enfileirar(f, 8);
	enfileirar(f, 1);
	enfileirar(f, 0);
	enfileirar(f, 3);
	
	imprimir2(f);
	printf("Primeiro: %d\n", primeiro(f));
	printf("Tamanho: %d\n\n", tamanho(f));
	
	esta_vazia(f);
	limpar(f);
	imprimir2(f);
	printf("\n");
	
	enfileirar(f, 2);
	enfileirar(f, 3);
	enfileirar(f, 11);
	enfileirar(f, 9);
	enfileirar(f, 7);
	imprimir_sem_esvaziar(f);
	printf("Primeiro: %d\n", primeiro(f));
	printf("Tamanho: %d\n\n", tamanho(f));
	
	desenfileirar(f);
	desenfileirar(f);
	imprimir_sem_esvaziar(f);
	printf("Primeiro: %d\n", primeiro(f));
	printf("Tamanho: %d\n\n", tamanho(f));
	
	//imprimir_sem_esvaziar(f);
	//imprimir_esvaziando(f);
	imprimir_sem_esvaziar(f);
	printf("Ultimo: %d\n\n", ultimo(f));
	
	printf("----- clonando a fila -----\n");
	clonar(f);
	printf("\n");
	
	printf("----- invertendo a fila -----\n");
	imprimir_sem_esvaziar(f);
	//inverter(f);
	
	destruir(f);
	
	return 0;
}
