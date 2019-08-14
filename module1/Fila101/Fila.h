typedef struct fila Fila;

Fila * criar();
void destruir(Fila * f);
void enfileirar(Fila * f, int v);
int desenfileirar(Fila * f); 
int tamanho(Fila * f);
int primeiro(Fila * f);
int ultimo(Fila * f);
int esta_vazia(Fila * f);
void limpar(Fila * f);
void imprimir(Fila * f);