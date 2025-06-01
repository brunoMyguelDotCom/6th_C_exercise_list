// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 5
Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso
ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres,
peso ideal = 62.1 x alt - 44.7.*/

#include <stdio.h>

// Ps: Rapaz, dizer o peso ideal de uma mulher eh meio perigoso, nao acha Rodney?
float calculaPesoIdeal(float alt, char sexo)
{
    // Variavel para resultado
    float pesoIdeal = 0.00;

    // Condicional para cada genero
    if (sexo == 'm' || sexo == 'M')
    {
        pesoIdeal = (72.7 * alt) - 58;
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        pesoIdeal = (62.1 * alt) - 44.7;
    }

    return pesoIdeal;
}

int main(int argc, char const *argv[])
{
    // Variaveis
    //(Altura sera tratado como float, ja que as contas sao feitas majoritariamente em numeros flutuantes)
    float altura, pesoFinal;
    char sexo;

    // Input user
    printf("Digite a altura da seguinte maneira: '1.60, 1.70, 1.85...': ");
    scanf("%f", &altura);

    // Tratamento de erro, sexo inexistente
    do
    {
        printf("Digite o sexo: ('m','M' - MASCULINO ou 'f', 'F' - FEMININO): ");
        scanf(" %c", &sexo);
        if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F')
        {
            printf("Opcao invalida, infelizmente nao programamos isso para pessoas que se se identificam como alem de Homem ou Mulher\n\n");
            printf("Digite novamente: \n");
        }

    } while (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');

    // Chamada funcao
    pesoFinal = calculaPesoIdeal(altura, sexo);

    // Print
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", sexo);
    printf("Seu peso ideal e: %.2fkg\n", pesoFinal);

    return 0;
}
