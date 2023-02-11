#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    //Definição da Variavel
    char letra;

    printf("-------------------------------------------------\n");
    printf("\t [#] Calculadora Basica Aula C/C++ \n");
    printf("\t [#] Desenvolvedor : Biel\n");
    printf("-------------------------------------------------\n");

    printf("Digite a Letra :");
    scanf("%c", &letra);

    printf("Codigo da letra = %d \n", letra);

    system("pause");
}
