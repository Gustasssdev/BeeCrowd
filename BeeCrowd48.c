#include <stdio.h>

int main(){


    float salario, n_salario; 
    char i = '%';
    scanf("%f", &salario);

    if (0 < salario && salario <= 400)
    {
        n_salario = salario + (salario * 15) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 15 %c\n", i);  
    }
else if (400.01 < salario && salario <= 800)
{
        n_salario = salario + (salario * 12) / 100;
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste ganho: %.2f\n", n_salario - salario);
        printf("Em percentual: 12 %c\n", i); 
}

else if (800.01 < salario && salario<= 1200)
{
    n_salario = salario + (salario * 10) / 100;
    printf("Novo salario: %.2f\n", n_salario);
    printf("Reajuste ganho: %.2f\n", n_salario - salario);
    printf("Em percentual: 10 %c\n", i); 
}    

else if (1200.01 < salario && salario <= 2000)
{
    n_salario = salario + (salario * 7) / 100;
    printf("Novo salario: %.2f\n", n_salario);
    printf("Reajuste ganho: %.2f\n", n_salario - salario);
    printf("Em percentual: 7 %c\n", i); 
}
else if (salario >= 2000)
{
    n_salario = salario + (salario * 4) / 100;
    printf("Novo salario: %.2f\n", n_salario);
    printf("Reajuste ganho: %.2f\n", n_salario - salario);
    printf("Em percentual: 4 %c\n", i); 
}


}