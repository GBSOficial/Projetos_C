#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Exerc�cio de Fixa��o 3 - Calculadora com Menu
void main()
{
     // Usar o <locale.h> e essa Fun��o abaixo para fazer a Leitura do Assento.
     setlocale(LC_ALL,"");

     float valor1;
     float valor2;
     int opcao;

    while(opcao < 1 || opcao > 4 )
    {
    // Leitura dos Valores (Nota01,Nota02,Nota03)
    printf("-------------------------------------------------\n");
    printf("\t [#] Calculadora Basica Aula C/C++ \n");
    printf("\t [#] Desenvolvedor : Biel\n");
    printf("-------------------------------------------------\n");
    printf("Ol�, Escolha uma Op��o:\n");
    printf("1- Somar\n");
    printf("2- Subtrair\n");
    printf("3- Dividir\n");
    printf("4- Multiplicar\n");
    scanf("%d", &opcao);
    printf("Digite o Primeiro Valor :");
    scanf("%f", &valor1);
    printf("Digite o Segundo Valor :");
    scanf("%f", &valor2);



    switch(opcao)
    {
    case 1:
        printf("Resultado da soma : %.0f \n", valor1+valor2);
        break;
    case 2:
        printf("Resultado da Subtra��o : %.1f \n", valor1-valor2);
        break;
    case 3:
        printf("Resultado da Divis�o : %.1f \n", valor1/valor2);
        break;
    case 4:
        printf("Resultado da Multiplica��o : %.1f \n", valor1*valor2);
        break;

    default:
        printf("Op��o invalida\n");
        break;
    }
}

    system("pause");

}
