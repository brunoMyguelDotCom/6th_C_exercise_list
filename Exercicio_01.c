// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 1
Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A a
função calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2)
e se for H, a sua média harmônica. A média calculada também deve retornar por parâmetro*/

#include <stdio.h>

float opcoesCalculoMedias(float nota1, float nota2, float nota3, char letraControle)
{
    float somaValores = 0.0;
    float result = 0.0;

    // Media aritmetica simples
    if (letraControle == 'a' || letraControle == 'A')
    {
        printf("MEDIA ARITMETICA:\n\n");

        somaValores = nota1 + nota2 + nota3;
        result = somaValores / 3;
    }

    // Media aritmetica ponderada
    else if (letraControle == 'p' || letraControle == 'P')
    {
        printf("MEDIA PONDERADA:\n\n");

        somaValores = (nota1 * 5) + (nota2 * 3) + (nota3 * 2);
        result = somaValores / (5 + 3 + 2);
    }
    // Media harmonica
    else if (letraControle == 'h' || letraControle == 'H')
    {
        printf("MEDIA HARMONICA:\n\n");

        somaValores = (1 / nota1) + (1 / nota2) + (1 / nota3);
        result = 3 / somaValores;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    float notas[3];
    char letraControle;
    float mediaFinal = 0.0;

    // loop para input
    for (size_t i = 0; i < 3; i++)
    {
        printf("Digite o valor da %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Tratamento de erro, opcao invalida
    do
    {
        // Input restante antes da chamada da funcao
        printf("'A' - Media aritmetica das notas\n'P' - Media ponderada das notas\n'H' - Media harmonica\n");
        printf("Digite a letra referente a funcao desejada: ");
        scanf(" %c", &letraControle);

        if (letraControle != 'a' && letraControle != 'A' && letraControle != 'p' && letraControle != 'P' && letraControle != 'h' && letraControle != 'H')
        {
            printf("\n\nOpcao invalida! Tente novamente.\n\n");
        }
        else
        {
            break;
        }

    } while (1);

    // Chamada da funcao
    mediaFinal = opcoesCalculoMedias(notas[0], notas[1], notas[2], letraControle);

    // Print
    printf("MEDIA FINAL: %.2f\n\n", mediaFinal);

    return 0;
}
