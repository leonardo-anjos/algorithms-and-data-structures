typedef struct fila Fila;

Fila * criar();
void destruir(Fila * f);
int desenfileirar(Fila * f); 
void enfileirar(Fila * f, int v);
int tamanho(Fila * f);
int primeiro(Fila * f);

/* novas funcoes */
void imprimir(Fila * f);
int ultimo(Fila * f);
int elemento_meio(Fila * f);
int esta_vazia(Fila * f);
void limpar(Fila * f);
