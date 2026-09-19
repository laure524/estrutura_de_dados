#include <stdio.h>
#include "complexo.h"

int main() {
    Complexo c1, c2, c3, c4;

    // Testar a operação Atribui[cite: 2]
    Atribui(&c1, 4.0f, 3.0f);
    Atribui(&c2, 2.5f, -1.0f);
    Atribui(&c4, 7.0f, 0.0f);

    printf("Número C1: ");
    Imprime(c1); // Deve imprimir 4.00 + 3.00i[cite: 2]

    printf("Número C2: ");
    Imprime(c2); // Deve imprimir 2.50 + -1.00i[cite: 2]

    // Testar a operação Copia[cite: 2]
    Copia(&c3, c1);
    printf("Número C3 (Cópia de C1): ");
    Imprime(c3);

    // Testar a operação Soma[cite: 2]
    Complexo resultadoSoma = Soma(c1, c2);
    printf("Soma (C1 + C2): ");
    Imprime(resultadoSoma);

    // Testar a operação EhReal[cite: 2]
    printf("O número C1 é real? %s\n", EhReal(c1) ? "Sim" : "Não");
    printf("O número C4 é real? %s\n", EhReal(c4) ? "Sim" : "Não");

    return 0;
}