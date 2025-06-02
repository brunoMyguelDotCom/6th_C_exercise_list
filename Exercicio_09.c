// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 9
Faça uma função que recebe um vetor X de 30 elementos inteiros, por referência, e retorna,
também por referência, dois vetores A e B. O vetor A deve conter os elementos
pares de X e o vetor B, os elementos impares. */

#include <stdio.h>

void separaParesImpares(int vetorX[], int vetorA[], int vetorB[], int *tamanhoA, int *tamanhoB)
{
    // Variaveis para controle dos indices dos vetores A e B
    int indiceA = 0, indiceB = 0;

    // Loop para separar pares e impares
    for (size_t i = 0; i < 30; i++)
    {
        if (vetorX[i] % 2 == 0)
        {
            // Armazena o elemento par no vetor A
            vetorA[indiceA] = vetorX[i];
            indiceA++;
        }
        else
        {
            // Armazena o elemento impar no vetor B
            vetorB[indiceB] = vetorX[i];
            indiceB++;
        }
    }

    // Atualiza os tamanhos dos vetores A e B
    *tamanhoA = indiceA;
    *tamanhoB = indiceB;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    int vetorX[30], vetorA[30], vetorB[30], tamanhoA = 0, tamanhoB = 0;

    // Input do usuario para o vetor X
    printf("Digite os 30 elementos do vetor X:\n");
    for (size_t i = 0; i < 30; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorX[i]);
    }

    // Chamada da funcao
    separaParesImpares(vetorX, vetorA, vetorB, &tamanhoA, &tamanhoB);

    // Exibe o vetor A
    printf("\nVetor A (PARES):\n");
    for (size_t i = 0; i < tamanhoA; i++)
    {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    // Exibe o vetor B
    printf("\nVetor B (IMPARES):\n");
    for (size_t i = 0; i < tamanhoB; i++)
    {
        printf("%d ", vetorB[i]);
    }
    printf("\n\n");

    return 0;
}