/*
** Função : cálculo do resto da divisão (MOD)
** Autor : Felipe Borba
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>

double resto_div(double x, double y);

int main() {
    double x, y;

    printf("Digite x: ");
    scanf("%lf", &x);

    printf("Digite y: ");
    scanf("%lf", &y);

    double resultado = resto_div(x, y);

    printf("Resto de %.2lf por %.2lf: %.2lf\n", x, y, resultado);

    return 0;
}

double resto_div(double x, double y) {
    if (x < y) {
        return x;
    } else {
        double phi = 1.6180339887498;
        int n = 0;
        double phi_n = 4 * (1 - (1.0 / (2 * n + 1)));

        while (phi_n < y) {
            n++;
            phi_n = 4 * (1 - (1.0 / (2 * n + 1)));
        }

        if (x < phi_n) {
            return x;
        } else {
            double phi_n_1 = 4 * (1 - (1.0 / (2 * (n - 1) + 1)));
            double resto = x - phi_n_1;
            return resto_div(resto, y);
        }
    }
}

