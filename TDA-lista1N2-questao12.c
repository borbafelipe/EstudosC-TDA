/*
** Funcao: triangulo de pascal
** Autor: Felipe Borba
** Data: 09/11/2023
** Observacoes:
*/

#include <stdio.h>

int fatorial(int n);

void trianguloPascal(int linhas);

int main() {
    int linhas;

    printf("Digite o numero de linhas do triangulo de Pascal: ");
    scanf("%d", &linhas);

    if (linhas < 1) {
        printf("O numero de linhas deve ser pelo menos 1.\n");
        return 1;
    }

    trianguloPascal(linhas);

    return 0;
}

int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

void trianguloPascal(int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            int coeficiente = fatorial(i) / (fatorial(j) * fatorial(i - j));
            printf("%d ", coeficiente);
        }
        printf("\n");
    }
}
