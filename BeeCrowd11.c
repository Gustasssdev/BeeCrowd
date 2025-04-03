#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <math.h>    // Biblioteca matemática para usar a função pow (potência)

int main() {
    int R;              // Declaração da variável R (raio), do tipo inteiro
    double volume;      // Declaração da variável volume, do tipo double (número decimal)
    double pi = 3.14159; // Definição da constante π (pi) com valor aproximado

    // Lê o valor do raio fornecido pelo usuário e armazena na variável R
    scanf("%d", &R);

    // Calcula o volume da esfera usando a fórmula: V = (4/3) * π * R³
    // A função pow(R, 3) eleva R ao cubo
    volume = (pow(R, 3) * pi * 4) / 3.0;

    // Exibe o volume calculado com 3 casas decimais no formato "VOLUME = X.XXX"
    printf("VOLUME = %.3f\n", volume); 

    return 0; // Retorna 0 indicando que o programa finalizou corretamente
}
