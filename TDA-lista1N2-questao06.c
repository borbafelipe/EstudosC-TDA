/*
** Funcao : Calculo da Sequencia de Fibonacci
** Autor : Felipe Borba
** Data : 09/11/2023
** Observacoes:
*/

#include <stdio.h>

void calcularFibonacci(int lim);

int main() {
    int lim;

    printf("Digite um numero para a sequencia de Fibonacci: ");
    scanf("%d", &lim);

    calcularFibonacci(lim);

    return 0;
}

void calcularFibonacci(int lim) {
    int a = 0, b = 1, c;

    while (a <= lim) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

