typedef struct conta Conta;

//Conta * criar(/*passar o nome*/);

Conta * criar(char nome);

void debitar(Conta * c, float v);

void creditar(Conta * c, float v);

float saldo(Conta * c);

void imprimir(Conta * c);

void destruir(Conta * c);



