/*
** Função : verifica conjectura de goldbach para pares até um número N informado pelo usuário
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int ep(int n);

int main() {
    int n;

    printf("Digite um número (N): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("conjectura de goldbach para %d: ", i);

        for (int j = 2; j <= i / 2; ++j) {
            if (ep(j) && ep(i - j)) {
                printf("%d + %d\n", j, i - j);
                break;
            }
        }
    }

    return 0;
}