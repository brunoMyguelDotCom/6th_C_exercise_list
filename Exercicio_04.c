// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 4
Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.*/

#include <stdio.h>

int calculaFatorial(int numero)
{
    // Tratamento de erros
    if (numero < 0)
        return -1;
    if (numero == 0)
        return 1;

    // Variaveis para controle e resultado
    int result = 1;
    int i;

    // loop de multiplicacao
    for (i = numero; i > 1; i--)
    {
        result *= i;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    int num, fatorial;

    // Input user
    printf("Digite o numero a ser calcualdo seu fatorial: ");
    scanf("%d", &num);

    // Chamada da funcao
    fatorial = calculaFatorial(num);

    // Print
    printf("Fatorial de %d e igual a %d\n", num, fatorial);

    return 0;
}
