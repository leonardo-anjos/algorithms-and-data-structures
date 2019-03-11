#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(int argc, char *argv[]) {
	Pilha * p = criar();

	empilhar(p, 1);
	empilhar(p, 2);
	empilhar(p, 3);
	empilhar(p, 4);
	
	imprimir(p);

  retirar_base(p);
	
	destruir(p);

}