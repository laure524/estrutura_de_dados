#include <stdio.h>
#include "aluno.h"

int main() {
    CadastroAlunos turma;
    inicializar(&turma);
    
    char nome[MAX_NOME];
    int matricula;
    float n1, n2;
    
    // Instrução exibida na saída desejada
    printf("Dados do aluno: nome(sem espacos), matricula, nota1, nota2\n");
    
    // Lendo os dados de 3 alunos interativamente (conforme o exemplo do exercício)
    for (int i = 1; i <= 3; i++) {
        printf("Informe os dados do aluno(%d): ", i);
        scanf("%s %d %f %f", nome, &matricula, &n1, &n2);
        
        cadastrarAluno(&turma, nome, matricula, n1, n2);
    }
    
    // Exibindo a listagem final formatada
    exibirAlunos(&turma);
    
    return 0;
}