/*
** Função : Verificação de Números Primos
** Autor : Felipe Borba
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>

int ePrimo(int num);

int main() {
    int lim;

    printf("Digite um número inteiro para definir o intervalo 2~limite: ");
    scanf("%d", &lim);

    if (lim < 2) {
        printf("O numero deve ser no min 2.\n");
        return 1; 
    }

    printf("Números primos entre 2 e %d: ", lim);

    for (int num = 2; num <= lim; num++) {
        if (ePrimo(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

int ePrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
