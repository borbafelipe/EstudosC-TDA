/*
** Função : Verifica se um número é primo e exibe primos até um número inserido pelo usuário
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int ePrimo(int num);

int main() {
    int n;

    printf("Digite um número (N): ");
    scanf("%d", &n);

    printf("Números primos entre 2 e %d:\n", n);
    for (int i = 2; i <= n; ++i) {
        if (ePrimo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int ePrimo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}