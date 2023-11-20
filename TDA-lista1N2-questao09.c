/*
** Função : Calcula a multiplicação entre dois números inteiros de forma recursiva
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int multiplicacao(int a, int b);

void exibirTabuadas(int limite);

int main() {
    int numeroLimite;

    printf("Digite o número limite para as tabuadas: ");
    scanf("%d", &numeroLimite);

    exibirTabuadas(numeroLimite);

    return 0;
}

int multiplicacao(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + multiplicacao(a, b - 1);
    }
}

void exibirTabuadas(int limite) {
    for (int i = 2; i <= limite; ++i) {
        printf("Tabuada do %d:\n", i);
        for (int j = 1; j <= 10; ++j) {
            printf("%d x %d = %d\n", i, j, multiplicacao(i, j));
        }
        printf("\n");
    }
}
