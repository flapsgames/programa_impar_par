/* * * * * * * * * * * * * * * * * * * * *
 *                                       *
 *  Aluno : Lucas Carvalho               *
 *  Data : 31/05/2022                    *
 *  Curso : 1° Período EAI               *
 *  Aula : Laboratório de Programação    *
 *                                       *
 * * * * * * * * * * * * * * * * * * * * */

/************************************************************
*                                                           *
*   Este programa pede ao usuário a inserção de um número   *
*   inteiro e permite com que o usuário escolha como quer   *
*   mostrá-los (PAR - começando no zero e indo até o número *
*   par mais próximo dele. IMPAR - Começando no 1 e indo    *
*   até o número impar mais próximo dele. Caso o número     *
*   mais próximo for o Nº escolhido, mostra ele próprio.)   *
*                                                           *
*************************************************************/

#include <stdio.h>
#include <stdlib.h>
int n, escolha, e, s;
char recomecar;

int pares()
{
    // verifica se o número é par
    if (n % 2 == 0)
    {
    // cria o loop de soma de zero até o próprio número.
        for (s = 0; s < n; s = s + 2)
        {
        // mostra cada numero na tela
            printf(" %d", s);
        }
        printf(" %d\n", n);
    }
    // como não é par, executa outro loop.
    else
    {
    // cria o loop de soma do 0 até o número inteiro mais próximo.
        for (s = 0; s < n; s = s + 2)
        {
        // mostra cada numero na tela
            printf(" %d", s);
        }
        printf("\n");
    }
}
int impares()
{
    // verifica se o número é par.
    if (n % 2 == 0)
    {
        // cria o loop de soma de um até o número inteiro mais próximo.
        for (s = 0; s < n; s++)
        {
            s++;
            // mostra cada numero na tela
            printf(" %d", s);
        }
        printf("\n");
    }
    // como não é par, executa o loop.
    else
    {
        // cria o loop de soma de um até o próprio número.
        for (s = 0; s < n; s++)
        {
            s++;
            // mostra cada numero na tela
            printf(" %d", s);
        }
    }
}
int main()
{
    e = 1;
    // cria o loop inicial de execução do programa.
    while (e)
    {
        // pede ao usuário para inserir o número.
        printf(" Insira um numero inteiro: ");
        scanf("%d", &n);
        // verifica se o número é menor do que zero
        if (n < 0)
        {
            printf(" ERRO: o numero nao pode ser negativo. Por favor, insira outro. \n");
        }
        // o número é maior do zero.
        else
        {
        // interação com o usuário: opção par ou ímpar
            printf(" Escolha uma opcao:\n");
            printf(" P - Par \n I - Impar \n ");
            getchar();
            escolha = getchar();
        // verifica qual a opção escolhida pelo usuário
            switch (escolha)
            {
            // para escolha da opção par.
                case 'p':
                case 'P':
                pares();
                // quebra o loop do programa.
                e = 0;
                break;
                case 'i':
                case 'I':
                impares();
                e = 0;
                break;
                // mostra um erro para o usuário que escolher uma opção fora do menu.
                default:
                printf(" Por favor, use somente as opcoes do menu. \n");
            }
            printf("\n Deseja comecar novamente ? \n");
            printf(" S - Sim \n N - Nao \n ");
            getchar();
            recomecar = getchar();
            switch(recomecar)
            {
                case 'n':
                case 'N':
                e = 0;
                break;
                case 's':
                case 'S':
                e = 1;
                break;
                default:
                printf("Use apenas as opcoes do menu. \n");
            }
        }
    }
    //return 0;
}
