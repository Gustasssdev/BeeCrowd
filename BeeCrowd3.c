#include <stdio.h>
#include <math.h>
int main(){
double raio, A;

scanf("%lf", &raio);// lf para leitura e g para saída

A = 3.14159 * pow(raio,2);
printf("A=%.4lf\n", A);   
}