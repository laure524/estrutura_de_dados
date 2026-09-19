#include <stdio.h>
#include "banco.h"

// Define o número de contas existentes como sendo 0
void InicializaContas(Contas *cnt) {
    cnt->num_contas_existentes = 0;
}

// Cria n novas contas, solicitando ao usuário o saldo e gerando o número automaticamente
void CriarNovasContas(Contas *cnt, int n) {
    for (int i = 0; i < n; i++) {
        if (cnt->num_contas_existentes >= MAX_CONTAS) {
            printf("Limite máximo de contas atingido!\n");
            break;
        }
        
        int idx = cnt->num_contas_existentes;
        
        // Atribuição automática do número da conta (ex: sequencial a partir de 1)
        cnt->vetor_contas[idx].numero = idx + 1;
        
        printf("Digite o saldo inicial para a conta %d: ", cnt->vetor_contas[idx].numero);
        scanf("%f", &cnt->vetor_contas[idx].saldo);
        
        cnt->num_contas_existentes++;
    }
}

// Imprime todas as contas existentes
void ImprimirContas(Contas *cnt) {
    printf("\n--- Lista de Contas Bancárias ---\n");
    for (int i = 0; i < cnt->num_contas_existentes; i++) {
        printf("Conta Número: %d | Saldo: R$ %.2f\n", 
               cnt->vetor_contas[i].numero, 
               ConsultaSaldo(cnt->vetor_contas[i])); // Utiliza a função do TAD ContaBancaria
    }
    printf("----------------------------------\n");
}

// Dado o número de uma conta, zera seu saldo
void ZerarSaldoConta(Contas *cnt, int num) {
    int encontrada = 0;
    
    for (int i = 0; i < cnt->num_contas_existentes; i++) {
        // Utiliza a função VerificaNum do TAD ContaBancaria
        if (VerificaNum(cnt->vetor_contas[i], num)) {
            cnt->vetor_contas[i].saldo = 0.0f;
            encontrada = 1;
            printf("Saldo da conta %d zerado com sucesso.\n", num);
            break;
        }
    }
    
    if (!encontrada) {
        printf("Conta com número %d não foi encontrada.\n", num);
    }
}