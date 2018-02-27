typedef struct pilha Pilha;

Pilha * criar();
void destruir(Pilha * p);

int desempilhar(Pilha * p); // ou pop
void empilhar(Pilha * p, int v); // ou push
int tamanho(Pilha * p);
int topo(Pilha * p);

void imprimir(Pilha * p);
void inverter(Pilha * p);
int eh_igual(Pilha * p1, Pilha * p2);

