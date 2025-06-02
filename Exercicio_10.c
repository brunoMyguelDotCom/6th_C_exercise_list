// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 10
Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela abaixo:

Nota | Conceito
de 0,0 a 4,9 | D
de 5,0 a 6,9 | C
de 7,0 a 8,9 | B
de 9,0 a 10,0 | A */

#include <stdio.h>

char determinaConceito(float media)
{
    // Variavel para armazenar o conceito
    char conceito;

    // Determina o conceito com base na media
    if (media >= 0.0 && media <= 4.9)
    {
        conceito = 'D';
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        conceito = 'C';
    }
    else if (media >= 7.0 && media <= 8.9)
    {
        conceito = 'B';
    }
    else if (media >= 9.0 && media <= 10.0)
    {
        conceito = 'A';
    }
    else
    {
        // Caso a media seja invalida
        conceito = '?';
    }

    return conceito;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    float media;
    char conceito;

    // Input do usuario
    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    // Chamada da funcao
    conceito = determinaConceito(media);

    // Exibe o resultado
    if (conceito != '?')
    {
        printf("O conceito do aluno eh: %c\n\n", conceito);
    }
    else
    {
        printf("Media invalida!\n\n");
    }

    return 0;
}