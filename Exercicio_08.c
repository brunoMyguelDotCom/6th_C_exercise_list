// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 8
Faça uma função que recebe, por referência, 2 vetores de 10 elementos inteiros
e que calcule e retorne, também por referência, o vetor união dos dois primeiros. */

#include <stdio.h>

void calculaVetorUniao(int vetor1[], int vetor2[], int vetorUniao[])
{
    // Variavel para controle do indice do vetor uniao
    int indiceUniao = 0;

    // Copia os elementos do primeiro vetor para o vetor uniao
    for (size_t i = 0; i < 10; i++)
    {
        vetorUniao[indiceUniao] = vetor1[i];
        indiceUniao++;
    }

    // Copia os elementos do segundo vetor para o vetor uniao
    for (size_t i = 0; i < 10; i++)
    {
        vetorUniao[indiceUniao] = vetor2[i];
        indiceUniao++;
    }
}

int main(int argc, char const *argv[])
{
    // Variaveis
    int vetor1[10], vetor2[10], vetorUniao[20];

    // Input do usuario para o primeiro vetor
    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Input do usuario para o segundo vetor
    printf("\nDigite os 10 elementos do segundo vetor:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Chamada da funcao
    calculaVetorUniao(vetor1, vetor2, vetorUniao);

    // Exibe o vetor uniao
    printf("\nVetor Uniao:\n");
    for (size_t i = 0; i < 20; i++)
    {
        printf("%d ", vetorUniao[i]);
    }
    printf("\n\n");

    return 0;
}