#include<stdio.h>
#include<stdlib.h>
#include "Fracao.h"


cria_fracao(n, d) {
	int n1 = n;
	int n2 = n;
}

acessa_numerador(f) {
		
}

acessa_denominador(f) {
	
}

soma_fracao(fracao f1, fracao f2) {

	int n1 = get_numerador(f1);
	n2 = acessa_numerador(f2);
	d1 = acessa_denominador(f1);
	d2 = acessa_denominador(f2);
	
	return cria_fracao(n1*d2 + n2*d1, d1*d2 ); 
}
