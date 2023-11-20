/*
** Função : Calcula a potência de um número de forma recursiva
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

float pot(float base, int expoente);

int main() {
    float base;
    int expoente;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    float resultado = pot(base, expoente);
    printf("%.2f elevado a %d é: %.6f\n", base, expoente, resultado);

    return 0;
}

float pot(float base, int expoente) {
    if (expoente == 0) {
        return 1.0;
    } else {
        return base * pot(base, expoente - 1);
    }
}
