/*
** Função : Calcula o quociente inteiro da divisão entre dois inteiros de forma recursiva
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

int quociente(int m, int n);

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    int resultado = quociente(dividendo, divisor);
    printf("Quociente inteiro de %d dividido por %d: %d\n", dividendo, divisor, resultado);

    return 0;
}

int quociente(int m, int n) {
    if (m < n) {
        return 0;
    } else {
        return 1 + quociente(m - n, n);
    }
}
