// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 6
Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores
desse valor.*/

#include <stdio.h>

int verificaNumeroDivisores(int valor)
{
    // Variaveis para conta de divisores e controle ordinario de cada divisor no momento de sua descoberta
    int numeroDivisores = 0, divisorAtual = 1;

    // For que faz a bugiganga funcionar
    for (size_t i = 1; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            // Aumenta a quantiadade de dividores
            numeroDivisores++;

            // Print no dividor atual
            printf("%dº - DIVISOR: %d\n\n", divisorAtual, i);

            // Aumenta o valor que indica a posicao ordinal do divisor atual
            divisorAtual++;
        }
    }

    return numeroDivisores;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    int num, numeroDivisores = 0;

    // Input user
    printf("Digite um numero inteiro positivo para verificar o numero de divisores: ");
    scanf("%d", &num);

    // Chamada da funcao
    numeroDivisores = verificaNumeroDivisores(num);

    // Print
    printf("O numero: %d tem %d divisores\n\n", num, numeroDivisores);

    return 0;
}
