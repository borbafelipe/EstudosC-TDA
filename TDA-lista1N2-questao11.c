/*
** Função : Converte um número para outra base e exibe a representação
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>

void rep_na_base(int num, int base);

int main() {
    int e, b;

    printf("Digite o número: ");
    scanf("%d", &e);

    printf("Digite a base desejada: ");
    scanf("%d", &b);

    rep_na_base(e, b);

    return 0;
}

void rep_na_base(int num, int base) {
    if (num == 0) {
        printf("A representação na base %d é: 0\n", base);
    } else {
        int resto = num % base;
        int quociente = num / base;

        rep_na_base(quociente, base);

        if (resto < 10) {
            printf("%d", resto);
        } else {
            printf("%c", 'A' + (resto - 10));
        }
    }
}
