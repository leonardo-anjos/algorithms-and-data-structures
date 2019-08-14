#include <stdio.h>
#include <stdlib.h>
#include "Node.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char const *argv[]) {
	
	Node *root = NULL;
	Node **teste = NULL;
	int a;
	
	while(scanf("%d", &a)){
		inserir(&root, a);
	}
	
	system("clear");
	printf("\n");
	print_valores(&root, 0);
	teste = busca(&root, 13);	
	
	if ((*teste) == NULL) {
		printf("Deu rui\n");
	} else {
		printf("Valor achado%i\n", (*teste)->chave);
	}
	
	return 0;
}
