#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    float salario, n_salario; // Variáveis para armazenar o salário atual e o novo salário após o reajuste
    char i = '%';             // Caractere '%' para exibir na saída formatada

    // Leitura do valor do salário atual
    scanf("%f", &salario);

    // Verifica em qual faixa de reajuste o salário se encontra e aplica o percentual correspondente
    if (0 < salario && salario <= 400) {
        // Faixa de 0 até 400: reajuste de 15%
        n_salario = salario + (salario * 15) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 15 %c\n", i);  
    }
    else if (400.01 < salario && salario <= 800) {
        // Faixa de 400.01 até 800: reajuste de 12%
        n_salario = salario + (salario * 12) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 12 %c\n", i); 
    }
    else if (800.01 < salario && salario <= 1200) {
        // Faixa de 800.01 até 1200: reajuste de 10%
        n_salario = salario + (salario * 10) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 10 %c\n", i); 
    }    
    else if (1200.01 < salario && salario <= 2000) {
        // Faixa de 1200.01 até 2000: reajuste de 7%
        n_salario = salario + (salario * 7) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 7 %c\n", i); 
    }
    else if (salario >= 2000) {
        // Faixa acima de 2000: reajuste de 4%
        n_salario = salario + (salario * 4) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 4 %c\n", i); 
    }

    return 0; // Retorna 0 indicando que o programa foi finalizado com sucesso
}
