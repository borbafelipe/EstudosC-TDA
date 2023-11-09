/*
** Função : cálculo da aproximação de Pi usando a fórmula de Leibniz
** Autor : Felipe Borba
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>

double calcularAproxPi(int n);

int main() {
    int n;

    printf("Digite o número de ciclos para calcular Pi: ");
    scanf("%d", &n);

    double aproxPi = calcularAproxPi(n);

    printf("Aproximação de Pi após %d ciclos: %.15lf\n", n, aproxPi);

    return 0;
}

double calcularAproxPi(int n) {
    double pi = 0.0;
    int sinal = 1;

    for (int i = 0; i < n; i++) {
        pi += sinal / (2.0 * i + 1);
        sinal *= -1;
    }

    return 4 * pi;
}
