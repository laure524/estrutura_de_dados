#include <stdio.h>
#include <string.h>
#include "aluno.h"

// Inicializa o cadastro
void inicializar(CadastroAlunos *c) {
    c->qtd = 0;
}

// Insere um novo aluno no vetor
int cadastrarAluno(CadastroAlunos *c, const char *nome, int matricula, float n1, float n2) {
    if (c->qtd >= MAX_ALUNOS) {
        return 0; // Erro: Cadastro cheio
    }
    
    strcpy(c->dados[c->qtd].nome, nome);
    c->dados[c->qtd].matricula = matricula;
    c->dados[c->qtd].nota1 = n1;
    c->dados[c->qtd].nota2 = n2;
    
    c->qtd++;
    return 1; // Sucesso
}

// Calcula a média das duas notas de um aluno
float calcularMedia(Aluno a) {
    return (a.nota1 + a.nota2) / 2.0;
}

// Exibe os alunos no formato de tabela pedido pelo exercício
void exibirAlunos(const CadastroAlunos *c) {
    if (c->qtd == 0) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }

    // Cabeçalho da tabela igual ao da imagem
    printf("\n%-11s %-10s %-5s\n", "Matricula", "Nome", "Media");
    
    for (int i = 0; i < c->qtd; i++) {
        float media = calcularMedia(c->dados[i]);
        // %-11d alinha a matrícula, %-10s alinha o nome e %.2f mostra a média com 2 casas decimais
        printf("%-11d %-10s %.2f\n", c->dados[i].matricula, c->dados[i].nome, media);
    }
}