#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, delta;
    double A1, A2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A == 0) {
        printf("Impossivel calcular\n");
    } else {
        delta = pow(B, 2) - (4 * A * C);

        if (delta < 0) {
            printf("Impossivel calcular\n");
        } else {
            A1 = (-B + sqrt(delta)) / (2 * A);
            A2 = (-B - sqrt(delta)) / (2 * A);

            printf("R1 = %.5lf\n", A1);
            printf("R2 = %.5lf\n", A2);
        }
    }

    return 0;
}
