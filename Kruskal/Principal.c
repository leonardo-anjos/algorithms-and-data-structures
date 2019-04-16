#include <stdio.h>
#include <stdlib.h>
#include "Kruskal.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char const *argv[]){

	int n,u,v, v1, v2, o, peso, m = 0;
    
  Grafo grafo;

  scanf("%d\n",&n);
  grafo.n = n;
  
  int atingido[n];

  grafo.V = (Fila **) malloc(n*sizeof(Fila*));
  for (int i = 0; i < n; ++i){
    grafo.V[i] = (Fila *) malloc(sizeof(Fila));
    grafo.V[i]->tamanho = 0;
    grafo.V[i]->inicio = NULL;
    grafo.V[i]->fim = NULL;
  }

  while(scanf("%d %d %f", &v1, &v2, &peso) == 3){
    enfila(grafo.V[v1-1], v2-1, peso);
    // enfila(grafo.V[v2-1], v1-1, peso);
    m++;
  }

  // // algoritmo kruskal - criando grafo T
  //  Grafo T;
  //  T.V = (Fila **) malloc(n*sizeof(Fila*));
  //  for (int i = 0; i < n; ++i){
  //      T.V[i] = (Fila *) malloc(sizeof(Fila));
  //      T.V[i]->tamanho = 0;
  //      T.V[i]->inicio = NULL;
  //      T.V[i]->fim = NULL;
  //  }
  // // criando vetor L[x] para Lista (registro Conjunto)
  //  Fila* L[n];
  //  for (int i = 0; i < n; ++i){
  //  	Fila c = {0, NULL, NULL};
  //  	enfila(&c, i, 0);
  //  	L[i] = &c;
  //  }


  // tentativa
  Aresta arestas[m];
  Noh* no;
  int j = 0;

  for (int i=0; i<n; ++i) {
    no = grafo.V[i]->inicio;

    while (no != NULL) {
      arestas[j].u = i;
      arestas[j].v = no->chave;
      arestas[j].peso = no->peso;

      no = no->proximo;
      j++;
    }
    
  }

}