#include "conta.h"

// Retorna 1 se a conta tiver o número num, e 0 se não tiver
int VerificaNum(ContaBancaria cont, int num) {
    if (cont.numero == num) {
        return 1;
    }
    return 0;
}

// Retorna o saldo da Conta Bancária
float ConsultaSaldo(ContaBancaria conta) {
    return conta.saldo;
}