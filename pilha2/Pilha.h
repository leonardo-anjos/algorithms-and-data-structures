// especificacao - tad
// semelhante a uma interface no paradigma oo

typedef struct pilha Pilha;

Pilha * criar();
void destruir(Pilha * p);

int desempilhar(Pilha * p); // ou pop
void empilhar(Pilha * p, int v); // ou push

int tamanho(Pilha * p);
int topo(Pilha * p);

// implementacoes adicionais
void imprimir(Pilha * p);
//void inserir_base(Pilha * p, int v);
int eh_igual(Pilha * p1, Pilha * p2);
//void inverter(Pilha * p);
void clonar(Pilha * p);

