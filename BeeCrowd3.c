#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <math.h>    // Biblioteca para funções matemáticas, como pow (potência)

int main(){
    double raio, A;  // Declaração de duas variáveis do tipo double: raio e A (área)

    // Lê um número real (double) fornecido pelo usuário e armazena na variável raio
    // "%lf" é o especificador de formato correto para leitura de números do tipo double
    scanf("%lf", &raio);

    // Calcula a área do círculo usando a fórmula: A = π * raio²
    // pow(raio, 2) eleva o raio ao quadrado
    A = 3.14159 * pow(raio, 2);

    // Exibe o valor da área com 4 casas decimais, no formato "A=XXXX"
    printf("A=%.4lf\n", A);   

    // Retorna 0 indicando que o programa finalizou com sucesso
    return 0;
}
