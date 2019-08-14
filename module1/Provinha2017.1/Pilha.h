typedef struct pilha Pilha;

Pilha * criar();
void destruir(Pilha * p);
void empilhar(Pilha * p, int v);
int desempilhar(Pilha * p); 
int tamanho(Pilha * p);
int topo(Pilha * p);

// questoes prova
int retira_menor_topo(Pilha * p);
int esta_ordenado(Pilha * p);
