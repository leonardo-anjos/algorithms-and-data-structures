typedef struct pilha Pilha;

Pilha * criar();
void destruir(Pilha * p);
void empilhar(Pilha * p, int x); // ou push
int desempilhar(Pilha * p); // ou pop

int tamanho(Pilha * p);
int topo(Pilha * p);
void imprimir(Pilha * p);

void inverter3(Pilha * p);