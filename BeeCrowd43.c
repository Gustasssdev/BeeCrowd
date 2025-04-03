#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    float A, B, C;          // Declaração das variáveis que representam os lados do triângulo
    float area, perimetro;  // Declaração das variáveis para armazenar o perímetro e a área

    // Lê três valores reais (float) representando os lados A, B e C
    scanf("%f %f %f", &A, &B, &C);
    
    // Verifica se os valores fornecidos podem formar um triângulo usando a desigualdade triangular:
    // A < B + C, B < A + C e C < A + B
    if (A < B + C && B < A + C && C < A + B) {
        // Se for um triângulo válido, calcula o perímetro (soma dos lados)
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        // Caso contrário, calcula a área de um trapézio com bases A e B e altura C:
        // Área = ((A + B) * C) / 2
        area = (A + B) * C / 2.0;
        printf("Area = %.1f\n", area);
    }

    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
