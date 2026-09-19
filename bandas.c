#include <stdio.h>
#include <string.h>

// 1. Definição da estrutura que representa os grupos musicais (bandas)
typedef struct {
    char nome[50];
    char genero[50];
    int integrantes;
    int ranking;
} Banda;

// Função para consultar e exibir a banda com base na posição do ranking solicitada pelo usuário
void consultarPorRanking(Banda *vetor, int tamanho) {
    int posEscolhida;
    int encontrada = 0;

    printf("\n--- Consulta de Banda por Ranking ---\n");
    printf("Introduza um numero de 1 ate 5 para ver a banda correspondente: ");
    scanf("%d", &posEscolhida);

    if (posEscolhida < 1 || posEscolhida > 5) {
        printf("Posicao invalida! Por favor, escolha um numero entre 1 e 5.\n");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        // Percorre o vetor usando apontadores ou acesso direto verificando o ranking
        if ((vetor + i)->ranking == posEscolhida) {
            printf("\nBanda encontrada na posicao %d do ranking:\n", posEscolhida);
            printf("Nome: %s\n", (vetor + i)->nome);
            printf("Genero musical: %s\n", (vetor + i)->genero);
            printf("Numero de integrantes: %d\n", (vetor + i)->integrantes);
            encontrada = 1;
            break;
        }
    }

    if (!encontrada) {
        printf("Nenhuma banda registada com a posicao %d no ranking.\n", posEscolhida);
    }
}

int main() {
    Banda minhasBandas[5];
    Banda *pBanda; // Apontador para cumprir o uso do operador ->

    printf("=== Registo das 5 Bandas Favoritas ===\n");

    // 2. Looping para preencher as 5 estruturas utilizando o operador ->
    for (int i = 0; i < 5; i++) {
        pBanda = &minhasBandas[i]; // Aponta para a banda atual no vetor

        printf("\nBanda %d:\n", i + 1);
        
        printf("Nome da banda: ");
        scanf(" %[^\n]", pBanda->nome); // Lê string com espaços

        printf("Tipo de musica (genero): ");
        scanf(" %[^\n]", pBanda->genero);

        printf("Numero de integrantes: ");
        scanf("%d", &pBanda->integrantes);

        printf("Posicao no ranking (1 a 5): ");
        scanf("%d", &pBanda->ranking);
    }

    // 3. Exibir todas as informações de todas as bandas cadastradas
    printf("\n\n=== Lista Completa das Bandas Favoritas ===\n");
    for (int i = 0; i < 5; i++) {
        pBanda = &minhasBandas[i];
        printf("\n[%d] Nome: %s\n", pBanda->ranking, pBanda->nome);
        printf("    Genero: %s\n", pBanda->genero);
        printf("    Integrantes: %d\n", pBanda->integrantes);
    }

    // 4. Chamada da função para consultar a banda por número de 1 até 5
    consultarPorRanking(minhasBandas, 5);

    return 0;
}