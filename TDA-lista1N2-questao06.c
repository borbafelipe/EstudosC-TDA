/*
** Função : Gera e exibe a sequência de Fibonacci até um número inserido pelo usuário
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int fibonacci(int n);

int main() {
    int limite;

    printf("Digite um número para o limite da sequência de Fibonacci: ");
    scanf("%d", &limite);

    printf("Sequência de Fibonacci até %d:\n", limite);

    int i = 0;
    while (fibonacci(i) <= limite) {
        printf("%d ", fibonacci(i));
        i++;
    }

    printf("\n");

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
