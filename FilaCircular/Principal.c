#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maior2(Fila * f) {
	int i, v, mv;
	for(i=0, mv=primeiro(f); i<tamanho(f); i++) {
		v = desenfileirar(f);
		if (v > mv) {
			mv = v;
		}
		enfileirar(f, v);
	}
	return mv;
}

int clonar(Fila * f) {
	Fila * faux = criar();
	
	while(tamanho(f) > 0) {
		enfileirar(faux, desenfileirar(f));
	}
	
	imprimir(f);
	imprimir(faux);
	
}


int main(int argc, char *argv[]) {
	Fila * f = criar();
	enfileirar(f, 8);
	enfileirar(f, 1);
	enfileirar(f, 0);
	enfileirar(f, 3);
	
	esta_vazia(f);
	printf("\nPrimeiro: %d\n", primeiro(f));
	printf("Ultimo: %d\n", ultimo(f));
	printf("Tamanho: %d\n", tamanho(f));
	printf("Maior: %d\n", maior(f));
	printf("Menor: %d\n", menor(f));
	printf("Soma total: %d\n\n", soma(f));
	printf("Media: %.2f\n\n", media(f));
	
	//limpar(f);
	
	//clonar(f);

/*
	inverter(f);
	imprimir(f);
	desenfileirar(f);
	desenfileirar(f);
	
	printf("Primeiro: %d\n", primeiro(f));
	printf("Tamanho: %d\n", tamanho(f));

	imprimir(f);
	inverter(f);
	imprimir(f);
	destruir(f);
*/

	return 0;
}
