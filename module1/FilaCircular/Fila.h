typedef struct fila Fila;

Fila * criar();
void destruir(Fila * f);

int desenfileirar(Fila * f); 
void enfileirar(Fila * f, int v);
int tamanho(Fila * f);
int primeiro(Fila * f);

void imprimir(Fila * f);
int maior(Fila * f);
int menor(Fila * f);
int ultimo(Fila * f);

int soma(Fila * f);
float media(Fila * f);

int esta_vazia(Fila * f);
//void limpar(Fila * f);
