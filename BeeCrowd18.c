#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    int N;   // Valor inteiro fornecido pelo usuário, representando o dinheiro total
    int n1;  // Quantidade de notas de 100
    int n2;  // Quantidade de notas de 50
    int n3;  // Quantidade de notas de 20
    int n4;  // Quantidade de notas de 10
    int n5;  // Quantidade de notas de 5
    int n6;  // Quantidade de notas de 2
    int n7;  // Quantidade de notas de 1

    // Lê o valor inteiro do usuário
    scanf("%d", &N);

    // Calcula a quantidade de cada nota necessária para formar o valor N
    n1 = N / 100;  // Quantidade de notas de 100
    n2 = (N % 100) / 50;  // Quantidade de notas de 50
    n3 = ((N % 100) % 50) / 20;  // Quantidade de notas de 20
    n4 = (((N % 100) % 50) % 20) / 10;  // Quantidade de notas de 10
    n5 = ((((N % 100) % 50) % 20) % 10) / 5;  // Quantidade de notas de 5
    n6 = (((((N % 100) % 50) % 20) % 10) % 5) / 2;  // Quantidade de notas de 2
    n7 = ((((((N % 100) % 50) % 20) % 10) % 5) % 2) / 1;  // Quantidade de notas de 1

    // Exibe o valor original digitado pelo usuário
    printf("%d\n", N);

    // Exibe a quantidade de cada nota necessária
    printf("%d nota(s) de R$ 100,00 \n", n1);
    printf("%d nota(s) de R$ 50,00 \n", n2);
    printf("%d nota(s) de R$ 20,00 \n", n3);
    printf("%d nota(s) de R$ 10,00 \n", n4);
    printf("%d nota(s) de R$ 5,00 \n", n5);
    printf("%d nota(s) de R$ 2,00 \n", n6);
    printf("%d nota(s) de R$ 1,00 \n", n7);

    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
