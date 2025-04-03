#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    int N, horas, minutos, segundos;  // Declaração das variáveis

    // Lê um número inteiro do usuário, representando um tempo em segundos
    scanf("%d", &N);

    // Calcula a quantidade de horas
    horas = N / 3600;  

    // Calcula os minutos restantes após extrair as horas
    minutos = (N % 3600) / 60;

    // Calcula os segundos restantes após extrair as horas e minutos
    segundos = N % 60;

    // Exibe o resultado no formato "horas:minutos:segundos"
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
