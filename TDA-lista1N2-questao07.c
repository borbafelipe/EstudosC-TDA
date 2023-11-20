/*
** Função : Calcula uma aproximação de PI usando a fórmula de Leibniz
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

double pi_aprox(int n);

int main() {
    int termos;

    printf("Digite o número de termos para a aproximação de PI: ");
    scanf("%d", &termos);

    double aprox_pi = pi_aprox(termos);
    printf("A aproximação de PI com %d termos é: %.8lf\n", termos, aprox_pi);

    return 0;
}

double pi_aprox(int n) {
    double soma = 0.0;
    for (int i = 0; i < n; ++i) {
        soma += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    return 4 * soma;
}