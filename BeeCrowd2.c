#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main(){
    int A, B, X;  // Declaração de três variáveis inteiras: A, B e X

    // Lê um valor inteiro do usuário e armazena na variável A
    scanf("%d", &A);  
    
    // Lê outro valor inteiro do usuário e armazena na variável B
    scanf("%d", &B);  

    // Calcula a soma de A e B e armazena o resultado em X
    X = A + B;

    // Exibe o resultado da soma no formato "X = valor"
    printf("X = %d\n", X);  

    return 0;  // Indica que o programa terminou com sucesso
}
