#include<stdio.h>
#include<stdlib.h>
#include "Fracao.h"

void main() {
	
	Fracao * f = criar(1.5, 6.2);
	
	printf("numerador = %.2f\n", numerador(f));
	printf("denominador = %.2f\n", denominador(f));
	
	printf("divisao = %.2f\n", divisao(f));
		
	destruir(f);
	
}
