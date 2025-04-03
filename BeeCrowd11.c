#include <stdio.h>
#include <math.h>

int main(){

int R; 
double volume;
double pi = 3.14159;
scanf("%d", &R);

volume = (pow(R, 3) * pi * 4 )/ 3.0;
printf("VOLUME = %.3f\n", volume); 
}