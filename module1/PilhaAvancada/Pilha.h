// especificacao - tad
// semelhante a uma interface no paradigma oo

typedef struct pilha Pilha;

Pilha * criar();
void destruir(Pilha * p);

void empilhar(Pilha * p, int v); // ou push
int desempilhar(Pilha * p); // ou pop

int tamanho(Pilha * p);
int base(Pilha * p);
int topo(Pilha * p);

void imprimir(Pilha * p);
void inserir_base(Pilha * p, int v);
int eh_igual(Pilha * p1, Pilha * p2);
void inverter(Pilha * p);
void clonar(Pilha * p);