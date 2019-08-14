typedef struct conta Conta;

Conta * criar(char nome);
void destruir(Conta * c);

void debitar(Conta * c, float v);
void creditar(Conta * c, float v);

float saldo(Conta * c);
void imprimir(Conta * c);






