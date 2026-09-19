#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

#define MAX_CONTAS 100 // Capacidade máxima do vetor de contas

// Estrutura do conjunto de contas (TADBanco)
typedef struct {
    int num_contas_existentes;
    ContaBancaria vetor_contas[MAX_CONTAS];
} Contas;

// Operações do TADBanco
void InicializaContas(Contas *cnt);
void CriarNovasContas(Contas *cnt, int n);
void ImprimirContas(Contas *cnt);
void ZerarSaldoConta(Contas *cnt, int num);

#endif