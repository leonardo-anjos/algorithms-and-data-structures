#include <stdio.h>
#include <stdlib.h>
#include "Kruskal.h"    

struct noh {
  int chave;
  double peso;
  Noh * proximo;
}; 

struct fila {
  int tamanho;
  Noh * inicio;
  Noh * fim;
}; 

struct grafo {
  int n;
  Fila ** V;
};

struct aresta {
  int u;
  int v;
  double peso;
};

void enfila (Fila* fila, int nova_chave, double novo_peso) {                        
  if (fila->tamanho == 0) {                                    
    fila->fim = (Noh*) malloc(sizeof(Noh));                    
    fila->inicio = (Noh*) malloc(sizeof(Noh));                
    fila->fim->chave = nova_chave;
    fila->fim->peso = novo_peso;                           
    fila->fim->proximo = NULL;                                
    fila->inicio = fila->fim;                                
  } else {                                                        
    Noh* aux = fila->fim;                                    
    aux->proximo = (Noh*) malloc(sizeof(Noh));                
    aux->proximo->chave = nova_chave;
    aux->proximo->peso = novo_peso;                        
    aux->proximo->proximo = NULL;                            
    fila->fim = aux->proximo;                                
  }                                                            

  fila->tamanho++;                                            
}                                                                

int desenfila(Fila* fila){                                        
  if (fila->tamanho == 0) {                                                            
    return -1;                                                
  }

  int chave = fila->inicio->chave;                            
  fila->inicio = fila->inicio->proximo;                         
  fila->tamanho--;                                            
  
  return chave;                                                
}
