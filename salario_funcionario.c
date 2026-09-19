#include <stdio.h>
#include <string.h>

typedef struct {
    int numero_inscricao;
    char nome[50];
    int classe;
    float horas_normais;
    float horas_extras;
    float salario_normal;
    float salario_extra;
    float deducao_inss;
    float salario_liq;
} Funcionario;

int main() {
    float salario_referencia;
    Funcionario f;

    // 1. O salário de referência deverá ser lido previamente.
    printf("Informe o salario de referencia: ");
    scanf("%f", &salario_referencia);

    // 2. Leitura dos dados do funcionário
    printf("Informe o numero de inscricao: ");
    scanf("%d", &f.numero_inscricao);
    
    fflush(stdin); 

    printf("Informe o nome do funcionario: ");
    fgets(f.nome, 50, stdin);
    f.nome[strcspn(f.nome, "\n")] = 0; // Remove o "enter" invisível do final

    printf("Informe a classe (1 ou 2): ");
    scanf("%d", &f.classe);

    printf("Informe a quantidade de horas normais trabalhadas: ");
    scanf("%f", &f.horas_normais);

    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%f", &f.horas_extras);

    // 3. Cálculos
    float valor_hora_base = 0;
    if (f.classe == 1) {
        valor_hora_base = 1.3 * salario_referencia;
    } else if (f.classe == 2) {
        valor_hora_base = 1.9 * salario_referencia;
    }

    f.salario_normal = f.horas_normais * valor_hora_base;
    
    // O salário referente às horas extras é calculado acrescentando 30% ao salário-hora normal.
    float valor_hora_extra = valor_hora_base * 1.3;
    f.salario_extra = f.horas_extras * valor_hora_extra;

    float salario_bruto = f.salario_normal + f.salario_extra;

    // O desconto do INSS é de 11% do salário bruto
    f.deducao_inss = salario_bruto * 0.11;

    // Salário líquido
    f.salario_liq = salario_bruto - f.deducao_inss;

    // 4. Emissão do Contracheque conforme o formato exigido
    printf("\n----------------------------------------\n");
    printf("NUMERO DE INSCRICAO: %d    NOME: %s\n", f.numero_inscricao, f.nome);
    printf("SALARIO HORAS NORMAIS: R$ %.2f\n", f.salario_normal);
    printf("SALARIO HORAS EXTRAS: R$ %.2f\n", f.salario_extra);
    printf("DEDUCAO INSS: R$ %.2f\n", f.deducao_inss);
    printf("SALARIO LIQUIDO: R$ %.2f\n", f.salario_liq);
    printf("----------------------------------------\n");

    return 0;
}