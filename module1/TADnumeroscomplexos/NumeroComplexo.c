#include<stdio.h>
#include<stdlib.h>
#include "NumComplexo.h"

struct complexo {
 	double real;
 	double imaginario;
};

complexo soma(complexo* num1, complexo* num2) {
 	complexo tempsoma;
 	tempsoma.real = num1->real + num2->real;
 	tempsoma.imaginario = num1->imaginario + num2->imaginario;
 
 	return tempsoma;
}

complexo multiplica(complexo* num1, complexo* num2) {
 	complexo tempmult;
 	tempmult.real = num1->real * num2->real - num1->imaginario * num2->imaginario;
 	tempmult.imaginario = num1->real * num2->imaginario + num1->imaginario * num2->real;
 	
	return tempmult;
}

complexo inverte(complexo* pnum) {
 	complexo temp;
 	temp.real = (-1) * pnum -> real;
 	temp.imaginario = (-1) * pnum -> imaginario;
 	
	return temp;
}

void escreve(complexo* num) {
 	printf("%.2f + %.2fi\n", num -> real, num -> imaginario);
}

void setcomplex(complexo* pnum, double real, double imagin) {
 	pnum -> real = real;
 	pnum -> imaginario = imagin;
}


