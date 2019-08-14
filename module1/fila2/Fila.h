//fila.h (interface de Fila)

typedef struct fila Fila;

Fila * criar();
void destruir(Fila * f);
int desenfileirar(Fila * f); 
void enfileirar(Fila * f, int v);
int tamanho(Fila * f);
int primeiro(Fila * f);

//implementacoes extras
int esta_vazia(Fila * f);
void limpar(Fila * f);
void imprimir_esvaziando(Fila * f);
void imprimir_sem_esvaziar(Fila * f);
int ultimo(Fila * f);
void clonar(Fila * f);
void inverter(Fila * f);



