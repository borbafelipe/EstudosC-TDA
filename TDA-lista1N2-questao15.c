/* Função : Simula o lançamento de dois dados e exibe os resultados em formato tabulado e tabela de frequências
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS_MAXIMOS 1000

int rolarDado() {
    return rand() % 6 + 1;
}

void exibirTabelaFrequencias(int frequencias[]) {
    printf("===============================\n");
    printf("Face\tQuantidade de Vezes\n");
    printf("===============================\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d\t%d vezes\n", i + 1, frequencias[i]);
    }
    printf("===============================\n");
}

int main() {
    int maxLancamentos;

    do {
        printf("Digite o número máximo de lançamentos (entre 1 e %d): ", LANCAMENTOS_MAXIMOS);
        scanf("%d", &maxLancamentos);
    } while (maxLancamentos < 1 || maxLancamentos > LANCAMENTOS_MAXIMOS);

    srand(time(NULL));

    int frequencias[6] = {0};

    printf("Lançamento\tDado 1\tDado 2\tSoma\n");

    for (int i = 0; i < maxLancamentos; ++i) {
        int dado1 = rolarDado();
        int dado2 = rolarDado();
        int soma = dado1 + dado2;

        frequencias[soma - 1]++;

        printf("%d\t\t%d\t%d\t%d\n", i + 1, dado1, dado2, soma);
    }

    exibirTabelaFrequencias(frequencias);

    return 0;
}
