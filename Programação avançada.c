/******************************************************************************
Nome:Rafael Lima Morial ADS
*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(numero == 0)
    {
        printf("Informe um número mais que zero: ");
        scanf("%d", &numero);
    }

    if (numero > 0) 
    {

        for (int i = numero; i >= 0; i--)
        {
            printf("contagem %d \n", i);
        }  

    } 
    else
    {
        for (int i = numero; i <= 0; i++)
        {
            printf("contagem %d \n", i);
        }
    } 

}
