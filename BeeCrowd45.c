#include <stdio.h>

int main() {
    double A, B, C, temp;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Ordenação em ordem decrescente
    if (A < B) { temp = A; A = B; B = temp; }
    if (A < C) { temp = A; A = C; C = temp; }
    if (B < C) { temp = B; B = C; C = temp; }
    
    // Verifica se forma um triângulo
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    
    // Classificação do triângulo
    if (A * A == B * B + C * C) {
        printf("TRIANGULO RETANGULO\n");
    } else if (A * A > B * B + C * C) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (A == B && B == C) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (A == B || B == C || A == C) {
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}
