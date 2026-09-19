#include <stdio.h>
#include "complexo.h"

// Atribui valores para os campos real e imaginário[cite: 2]
void Atribui(Complexo *c, float r, float i) {
    c->real = r;
    c->imaginario = i;
}

// Imprime o número no formato "R + Ci"[cite: 2]
void Imprime(Complexo c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginario);
}

// Copia o valor de um número complexo para outro[cite: 2]
void Copia(Complexo *destino, Complexo origem) {
    destino->real = origem.real;
    destino->imaginario = origem.imaginario;
}

// Soma dois números complexos[cite: 2]
Complexo Soma(Complexo c1, Complexo c2) {
    Complexo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

// Testa se um número é real (parte imaginária igual a zero)[cite: 2]
int EhReal(Complexo c) {
    if (c.imaginario == 0.0f) {
        return 1; // Verdadeiro (é real)
    }
    return 0; // Falso
}