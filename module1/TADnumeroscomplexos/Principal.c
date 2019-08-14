#include<stdio.h>
#include<stdlib.h>
#include "NumComplexo.h"

int main() {

	complexo comp1;
	complexo comp2;
 	double r1,r2;

	printf ("Digite a parte real do n�mero Complexo 1: ");
	cin >> r1;
	printf ("Digite a parte imaginaria do n�mero Complexo 1: ");
	cin >> r2;
	
	setcomplex(&comp1, r1, r2);
	
	printf ("Digite a parte real do n�mero Complexo 2: ");
	cin >> r1;
	printf ("Digite a parte imaginaria do n�mero Complexo 2: ");
	cin >> r2;
	setcomplex(&comp2, r1, r2);
	
	printf ("N�mero Complexo 1: ");
	escreve(&comp1);
	printf ("N�mero Complexo 2: ");
	escreve(&comp2);
	
	printf ("Soma de Complexo 1 e Complexo 2: ");
	escreve(&soma(&comp1,&comp2));
	
	printf ("Multiplica��o de Complexo 1 e Complexo 2: ");
	escreve(&multiplica(&comp1,&comp2));
	
	printf ("Invers�o do Complexo 1: ");
	screve(&inverte(&comp1));
	
	system("pause");
} 
