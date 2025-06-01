// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 31/05/2025
/* QUESTAO...........:

Questão Número: 3
Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual
a soma dos seus divisores excetuando-o. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A
função deve retornar um valor booleano. */

#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int numero)
{
    // Tratamento de erro, numero menor que 1
    if (numero <= 1)
    {
        return false;
    }

    int soma_divisores = 0;

    // Loop para determinar divisores
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            soma_divisores += i;
        }
    }

    // Retorna true ou false sobre a "perfeitcao" do numero
    return (soma_divisores == numero);
}

int main()
{
    // Variavel
    int num;

    // Input user
    printf("Digite um numero para verificar se e perfeito: ");
    scanf("%d", &num);

    // Chamada da funcao + verificacao final baseada no return 
    if (ehPerfeito(num))
    {
        printf("%d e um numero perfeito!\n", num);
    }
    else
    {
        printf("%d NAO e um numero perfeito.\n", num);
    }

    return 0;
}