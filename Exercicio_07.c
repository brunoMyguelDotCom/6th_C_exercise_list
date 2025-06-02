// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 7
Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.
Exemplo:
N=8
Result := 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 */

#include <stdio.h>

int calculaSomatorio(int valor)
{
    // Variavel para armazenar o somatorio
    int somatorio = 0;

    // Loop para calcular o somatorio
    for (size_t i = 1; i <= valor; i++)
    {
        // Adiciona o valor atual ao somatorio
        somatorio += i;

        // Exibe o valor atual e o somatorio parcial
        printf("%dº - VALOR: %d | SOMATORIO PARCIAL: %d\n\n", i, i, somatorio);
    }

    return somatorio;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    int num, somatorio = 0;

    // Input do usuario
    printf("Digite um numero inteiro positivo para calcular o somatorio: ");
    scanf("%d", &num);

    // Chamada da funcao
    somatorio = calculaSomatorio(num);

    // Exibe o resultado
    printf("O somatorio do numero: %d e %d\n\n", num, somatorio);

    return 0;
}