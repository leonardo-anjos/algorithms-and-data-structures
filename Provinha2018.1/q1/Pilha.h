typedef struct pilha Pilha;

// operacoes O - alteram o estado interno da pilha
Pilha * criar();
void destruir(Pilha * p);
int desempilhar(Pilha * p); 
void empilhar(Pilha * p, int v);

// operacoes V - retornam o estado interno da pilha
int tamanho(Pilha * p);
int topo(Pilha * p);

// bonus
void imprimir(Pilha * p);

// foco da questao
void retirar_base(Pilha * p);

