#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração das variáveis para armazenar as horas e minutos de início e fim do jogo
    int h_cmc, h_acb, min_cmc, min_acb;
    
    // Variáveis auxiliares para conversão de tempo e cálculo da duração do jogo
    int acumulador_cmc, acumulador_acb, duracao_total, duracao_h, duracao_min;

    // Leitura da hora e minuto de início (h_cmc, min_cmc) e da hora e minuto de término (h_acb, min_acb)
    scanf("%d %d %d %d", &h_cmc, &min_cmc, &h_acb, &min_acb);

    // Converter as horas e minutos para um valor total em minutos
    acumulador_cmc = (h_cmc * 60) + min_cmc;  // Tempo inicial em minutos
    acumulador_acb = (h_acb * 60) + min_acb;  // Tempo final em minutos  

    // Caso especial: Se o tempo inicial e final forem iguais, significa que o jogo durou 24 horas
    if (acumulador_cmc == acumulador_acb) {    
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        // Se o horário de início for maior que o horário de fim, o jogo passou da meia-noite
        if (acumulador_cmc > acumulador_acb) {
            duracao_total = (1440 - acumulador_cmc) + acumulador_acb;  // 1440 minutos = 24 horas
        } else {
            duracao_total = acumulador_acb - acumulador_cmc;  // Duração direta do jogo
        }
        
        // Converter a duração total de minutos para horas e minutos
        duracao_h = duracao_total / 60;   // Obtém a quantidade de horas
        duracao_min = duracao_total % 60; // Obtém os minutos restantes 

        // Exibe a duração do jogo no formato solicitado
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_h, duracao_min);
    }

    return 0;  // Retorna 0 indicando que o programa finalizou corretamente
}
