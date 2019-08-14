#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

struct arvore {
  No *raiz;
};

struct no {
  char info;
  No *pai;
  No *filho;
  No *irmao;
};

No *nos[9];

void alocar_nos() {
  int i;
  for (i = 0; i < 9; i++) {
    nos[i] = (No *)malloc(sizeof(No));
    nos[i]->info = 'A' + i;
    nos[i]->filho = NULL;
    nos[i]->irmao = NULL;
  }
}

void desalocar_nos() {
  int i;
  for (i = 0; i < 9; i++) {
    free(nos[i]);
  }
}

void desalocar_nos_rec(No *raiz) {
	if (raiz != NULL) {
		desalocar_nos_rec(raiz->filho);
		desalocar_nos_rec(raiz->irmao);
		free();
	}
}

No *no_letra(char c) {
  return nos[c - 'A'];
}

Arvore *criar() {
  Arvore *a = malloc(sizeof(Arvore));
  alocar_nos();

  no_letra('A')->filho = no_letra('B');
  no_letra('B')->irmao = no_letra('D');
  no_letra('D')->irmao = no_letra('E');
  no_letra('B')->filho = no_letra('C');
  no_letra('E')->filho = no_letra('F');
  no_letra('F')->irmao = no_letra('G');
  no_letra('G')->filho = no_letra('I');
  no_letra('G')->irmao = no_letra('H');
  
  a->raiz = no_letra('A');

  return a;
}

void destruir(Arvore *a) {
  desalocar_nos();
  free(a);
}

void imprimir(Arvore *a) {
  // printf("%c\n", a->raiz->filho->irmao->irmao->filho->irmao->irmao->info);
  // imp_pre(a->raiz);
  // imp_in(a->raiz);
  imp_pos(a->raiz);
  printf("\n");
}

void imp_pre(No *raiz) {
  if (raiz != NULL) {
    printf("%c ", raiz->info);
    imp_pre(raiz->filho);
    imp_pre(raiz->irmao);
  }
}

void imp_in(No *raiz) {
  if (raiz != NULL) {
    imp_in(raiz->filho);
    printf("%c ", raiz->info);
    imp_in(raiz->irmao);
  }
}

void imp_pos(No *raiz) {
  if (raiz != NULL) {
    imp_pos(raiz->filho);
    imp_pos(raiz->irmao);
    printf("%c ", raiz->info);
  }
}

int contar_nos_rec(No *raiz) {
	if (raiz != NULL) {
		return contar_nos_rec(raiz->filho) + contar_nos_rec(raiz->irmao) + 1;
	}
	return 0;
}

int contar_nos(Arvore *arv) {
	return contar_nos_rec(arv->raiz);
}

int altura(Arvore *arv) {
	return altura_rec(arv->raiz);
}

int altura_rec(No *raiz) {	
	if (raiz != NULL) {
		int af = contar_nos_rec(raiz->filho)+1;
		int ai = contar_nos_rec(raiz->irmao);
		return af > ai ? af : ai;
	}
	return -1;
}
