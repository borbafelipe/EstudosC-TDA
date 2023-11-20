/*
** Função : Verifica se um número é par ou ímpar
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int ep(int n);

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (ep(n)) {
        printf("%d e um numero par.\n", n);
    } else {
        printf("%d e um numero impar.\n", n);
    }

    return 0;
}

int ep(int n) {
    return n % 2 == 0;
}
