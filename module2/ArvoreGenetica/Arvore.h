typedef struct arvore Arvore;
typedef struct no No;

void alocar_nos();

void desalocar_nos();

No *no_letra(char c);

Arvore *criar();

void destruir(Arvore *arv);

void imprimir(Arvore *arv);

void imp_pre(No *raiz);

void imp_in(No *raiz);

void imp_pos(No *raiz);

int contar_nos_rec(No *raiz);

int contar_nos(Arvore *arv);

int altura(Arvore *arv);

void imprimir_nos_nivel(Arvore *arv, int nivel); // to be done...
