/*
** Função : verifica conjectura de goldbach para pares entre 700 e 1100
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int ep(int n);

int main() {
    int n1 = 700;
    int n2 = 1100;

    for (int i = n1; i <= n2; i += 2) {
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