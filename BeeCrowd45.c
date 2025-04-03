#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    double A, B, C, temp;  // Declaração das variáveis para armazenar os lados do triângulo

    // Lê três valores reais (double) representando os lados do triângulo
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Ordenação dos lados em ordem decrescente (A será sempre o maior)
    if (A < B) { temp = A; A = B; B = temp; } // Se A for menor que B, troca os valores
    if (A < C) { temp = A; A = C; C = temp; } // Se A for menor que C, troca os valores
    if (B < C) { temp = B; B = C; C = temp; } // Se B for menor que C, troca os valores
    
    // Verifica se os valores formam um triângulo válido (Desigualdade Triangular)
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;  // Encerra o programa pois não é possível formar um triângulo
    }
    
    // Classificação do triângulo com base nos ângulos:
    if (A * A == B * B + C * C) {
        printf("TRIANGULO RETANGULO\n");  // Triângulo Retângulo (Teorema de Pitágoras)
    } else if (A * A > B * B + C * C) {
        printf("TRIANGULO OBTUSANGULO\n"); // Triângulo Obtusângulo (ângulo maior que 90°)
    } else {
        printf("TRIANGULO ACUTANGULO\n");  // Triângulo Acutângulo (todos os ângulos menores que 90°)
    }
    
    // Classificação do triângulo com base nos lados:
    if (A == B && B == C) {
        printf("TRIANGULO EQUILATERO\n");  // Todos os lados iguais
    } else if (A == B || B == C || A == C) {
        printf("TRIANGULO ISOSCELES\n");   // Dois lados iguais
    }
    
    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
