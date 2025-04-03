#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    float X, Y;  // Declaração das variáveis X e Y para armazenar as coordenadas do ponto

    // Lê dois valores reais (float) representando as coordenadas X e Y
    scanf("%f %f", &X, &Y);

    // Verifica se o ponto está na origem (0,0)
    if (X == 0 && Y == 0) {
        printf("Origem\n");
    }
    // Verifica se o ponto está no primeiro quadrante (X positivo, Y positivo)
    else if (X > 0 && Y > 0) {
        printf("Q1\n");
    }
    // Verifica se o ponto está no segundo quadrante (X negativo, Y positivo)
    else if (X < 0 && Y > 0) {
        printf("Q2\n");
    }
    // Verifica se o ponto está no terceiro quadrante (X negativo, Y negativo)
    else if (X < 0 && Y < 0) {
        printf("Q3\n");
    }
    // Verifica se o ponto está no quarto quadrante (X positivo, Y negativo)
    else if (X > 0 && Y < 0) {
        printf("Q4\n");
    }
    // Verifica se o ponto está sobre o eixo Y (X = 0 e Y diferente de 0)
    else if (X == 0) {
        printf("Eixo Y\n");
    }
    // Caso contrário, o ponto está sobre o eixo X (Y = 0 e X diferente de 0)
    else {
        printf("Eixo X\n");
    }

    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
