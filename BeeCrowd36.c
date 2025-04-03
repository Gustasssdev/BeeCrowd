#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <math.h>    // Biblioteca matemática para usar as funções pow (potência) e sqrt (raiz quadrada)

int main() {
    double A, B, C, delta;  // Declaração das variáveis dos coeficientes da equação e do discriminante
    double A1, A2;          // Declaração das raízes da equação

    // Lê três valores reais (double) representando os coeficientes A, B e C da equação quadrática
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verifica se A é zero, pois nesse caso não é uma equação do segundo grau
    if (A == 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calcula o discriminante (delta) da equação quadrática: Δ = B² - 4AC
        delta = pow(B, 2) - (4 * A * C);

        // Se delta for negativo, não existem raízes reais
        if (delta < 0) {
            printf("Impossivel calcular\n");
        } else {
            // Calcula as raízes usando a fórmula de Bhaskara:
            // R1 = (-B + sqrt(delta)) / (2A)
            // R2 = (-B - sqrt(delta)) / (2A)
            A1 = (-B + sqrt(delta)) / (2 * A);
            A2 = (-B - sqrt(delta)) / (2 * A);

            // Exibe as raízes com 5 casas decimais
            printf("R1 = %.5lf\n", A1);
            printf("R2 = %.5lf\n", A2);
        }
    }

    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
