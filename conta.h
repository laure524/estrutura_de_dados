#ifndef CONTA_H
#define CONTA_H

// Estrutura da Conta Bancária
typedef struct {
    int numero;
    float saldo;
} ContaBancaria;

// Funções solicitadas pelo exercício para o TAD ContaBancaria
int VerificaNum(ContaBancaria cont, int num);
float ConsultaSaldo(ContaBancaria conta);

#endif