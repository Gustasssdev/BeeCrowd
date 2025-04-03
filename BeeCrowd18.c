#include <stdio.h>
 
int main() {

int N;
int n1; // 100
int n2; // 50
int n3; // 20
int n4; // 10
int n5; // 5
int n6; // 2
int n7; // 1

scanf("%d", &N);

n1 = N / 100; 
n2 = (N % 100) / 50; 
n3 = ((N % 100) % 50) / 20;
n4 = (((N % 100)% 50) % 20) / 10;
n5 = ((((N % 100)% 50) % 20) % 10) / 5;
n6 = (((((N % 100)% 50) % 20) % 10) % 5) / 2;
n7 = ((((((N % 100 ) % 50) % 20) % 10) % 5) % 2) / 1;


printf("%d\n", N);
printf("%d nota(s) de R$ 100,00 \n", n1);
printf("%d nota(s) de R$ 50,00 \n", n2);
printf("%d nota(s) de R$ 20,00 \n", n3);
printf("%d nota(s) de R$ 10,00 \n", n4);
printf("%d nota(s) de R$ 5,00 \n", n5);
printf("%d nota(s) de R$ 2,00 \n", n6);
printf("%d nota(s) de R$ 1,00 \n", n7);

return 0;
}