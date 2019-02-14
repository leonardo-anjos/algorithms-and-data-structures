typedef struct fracao Fracao;

Fracao * criar(float numerador, float denominador);

float numerador(Fracao * f);
float denominador(Fracao * f);
float divisao(Fracao * f);

void imprimir(Fracao * f);

void destruir(Fracao * f);



