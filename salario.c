#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    float salario;
    int idade;
    char sexo;
} Pessoa;

int main (){

    Pessoa Registro;

    printf ("Digite o nome: ");
    scanf("%s", &Pessoa.nome);
    fflush(stdin);
    printf("\nDigite a idade\n");
    scanf("%d", &Pessoa.idade);
    printf("Digite o salario: ");
    scanf("%f", &Pessoa.salario);
    printf("Digite o sexo: ");
    scanf(" %c", &Pessoa.sexo);
}
