typedef struct pilha Pilha;

Pilha * criar();
void destruir(Pilha * p);

void empilhar(Pilha * p, int v); // ou push
int desempilhar(Pilha * p); // ou pop
int tamanho(Pilha * p);
int topo(Pilha * p);

void imprimir(Pilha * p);
int somaDosElementos(Pilha * p);
int mediaSomaDosElementos(Pilha * p);
int esta_vazia(Pilha * p);
void pilhaPar(Pilha * p);
void pilhaImpar(Pilha * p);


