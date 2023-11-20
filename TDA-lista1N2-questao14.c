/*
** Função : Calcula a média, maior, menor, quantidade acima/abaixo/na média, variância e desvio padrão de notas
** Autor : Felipe Borba
** Data : 
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void lerNotas(float notas[], int tamanho);
void gerarNotasAleatorias(float notas[], int tamanho);
void exibirNotas(float notas[], int tamanho);
float calcularMedia(float notas[], int tamanho);
float encontrarMaior(float notas[], int tamanho);
float encontrarMenor(float notas[], int tamanho);
int contarAcimaMedia(float notas[], int tamanho, float media);
int contarAbaixoMedia(float notas[], int tamanho, float media);
int contarNaMedia(float notas[], int tamanho, float media);
float calcularVariancia(float notas[], int tamanho, float media);
float calcularDesvioPadrao(float variancia);

int main() {
    int quantidadeAlunos;

    do {
        printf("Digite a quantidade de alunos (entre 10 e 100): ");
        scanf("%d", &quantidadeAlunos);
    } while (quantidadeAlunos < 10 || quantidadeAlunos > 100);

    float notas[quantidadeAlunos];

    int opcao;
    printf("Escolha a opção:\n1 - Digitar as notas\n2 - Gerar automaticamente\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        lerNotas(notas, quantidadeAlunos);
    } else if (opcao == 2) {
        gerarNotasAleatorias(notas, quantidadeAlunos);
    } else {
        printf("Opção inválida. Encerrando o programa.\n");
        return 0;
    }

    printf("\nNotas dos alunos:\n");
    exibirNotas(notas, quantidadeAlunos);

    float media = calcularMedia(notas, quantidadeAlunos);
    printf("\nMédia das notas: %.2f\n", media);

    float maior = encontrarMaior(notas, quantidadeAlunos);
    float menor = encontrarMenor(notas, quantidadeAlunos);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    int acimaMedia = contarAcimaMedia(notas, quantidadeAlunos, media);
    int abaixoMedia = contarAbaixoMedia(notas, quantidadeAlunos, media);
    int naMedia = contarNaMedia(notas, quantidadeAlunos, media);
    printf("Alunos acima da média: %d\n", acimaMedia);
    printf("Alunos abaixo da média: %d\n", abaixoMedia);
    printf("Alunos na média: %d\n", naMedia);

    float variancia = calcularVariancia(notas, quantidadeAlunos, media);
    float desvioPadrao = calcularDesvioPadrao(variancia);
    printf("Variância: %.2f\n", variancia);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);

    return 0;
}

void lerNotas(float notas[], int tamanho) {
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

void gerarNotasAleatorias(float notas[], int tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; ++i) {
        notas[i] = rand() % 101; // Gera notas entre 0 e 100
    }
}

void exibirNotas(float notas[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");
}

float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; ++i) {
        soma += notas[i];
    }
    return soma / tamanho;
}

float encontrarMaior(float notas[], int tamanho) {
    float maior = notas[0];
    for (int i = 1; i < tamanho; ++i) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

float encontrarMenor(float notas[], int tamanho) {
    float menor = notas[0];
    for (int i = 1; i < tamanho; ++i) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

int contarAcimaMedia(float notas[], int tamanho, float media) {
    int contador = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (notas[i] > media) {
            contador++;
        }
    }
    return contador;
}

int contarAbaixoMedia(float notas[], int tamanho, float media) {
    int contador = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (notas[i] < media) {
            contador++;
        }
    }
    return contador;
}

int contarNaMedia(float notas[], int tamanho, float media) {
    int contador = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (notas[i] == media) {
            contador++;
        }
    }
    return
