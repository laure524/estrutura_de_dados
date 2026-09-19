#ifndef COMPLEXO_H
#define COMPLEXO_H

// Estrutura que define o número complexo com os campos real e imaginário[cite: 2]
typedef struct {
    float real;
    float imaginario;
} Complexo;

// Declaração das operações solicitadas[cite: 2]
void Atribui(Complexo *c, float r, float i);
void Imprime(Complexo c);
void Copia(Complexo *destino, Complexo origem);
Complexo Soma(Complexo c1, Complexo c2);
int EhReal(Complexo c);

#endif