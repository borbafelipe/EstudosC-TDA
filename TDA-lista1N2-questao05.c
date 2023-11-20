/*
** Função : Calcula o capital acumulado com juros ao longo de anos
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>
#include <math.h>

double calcularCapital(double capitalInicial, double taxaJuro, int anos);

int main() {
    double capitalInicial, taxaJuro;
    int anos;

    printf("Digite o capital inicial: ");
    scanf("%lf", &capitalInicial);

    printf("Digite a taxa de juros por ano: ");
    scanf("%lf", &taxaJuro);

    printf("Digite o número de anos: ");
    scanf("%d", &anos);

    double capitalAcumulado = calcularCapital(capitalInicial, taxaJuro, anos);

    printf("O capital acumulado ao final de %d anos é: %.2lf\n", anos, capitalAcumulado);

    return 0;
}

double calcularCapital(double capitalInicial, double taxaJuro, int anos) {
    return capitalInicial * pow((1 + taxaJuro), anos);
}
