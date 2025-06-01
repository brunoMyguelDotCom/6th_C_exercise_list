// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 2
Faça uma função que recebe a idade de uma pessoa em anos,
meses e dias e retorna essa idade expressa em dias. */

#include <stdio.h>

int idadeEmDias(int idade_anos, int idade_meses, int idade_dias)
{
    return (idade_anos * 365) + (idade_meses * 30) + idade_dias;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    int anos, meses, dias, soma;

    // Input do usuario
    printf("CONVERSOR IDADE EM DIAS: \n");

    printf("Digite quantos anos: ");
    scanf("%d", &anos);

    printf("Digite quantos meses: ");
    scanf("%d", &meses);

    printf("Digite quantos dias: ");
    scanf("%d", &dias);

    // Chamada da funcao com atribuicao a variavel de seu respectivo contexto
    soma = idadeEmDias(anos, meses, dias);

    // Print
    printf("Idade em dias: %d\n", soma);

    return 0;
}
