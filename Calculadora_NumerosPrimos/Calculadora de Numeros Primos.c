#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Exerc�cio de Fixa��o 3 - Conferir se N�mero � Primo

void main()
{

    setlocale(LC_ALL,"");

    //Definindo Variavel
    int i;
    int valor;
    int aux = 0;

    printf("-------------------------------------------------\n");
    printf("\t [#] Calculadora Basica Aula C/C++ \n");
    printf("\t [#] Desenvolvedor : Biel\n");
    printf("-------------------------------------------------\n");

    printf("Digite Seu Numero :");
    scanf("%d", &valor);

    for( i = 1; i <= valor ; i++)
    {
        // Conferindo quantas vezes houve divisibilidade
        if(valor % i == 0)
        {
            aux++;
        }
}

    if(aux == 2)
    {
        printf("O N�mero � Primo! \n(Motivo : Contem %d Divisores) \n", aux);
    }
    else
    {
        printf("O N�mero N�o � Primo! \n(Motivo : Contem %d Divisores) \n", aux);
    }
    system("pause");

}
