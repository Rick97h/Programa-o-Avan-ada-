/******************************************************************************
Nome:Rafael Lima Morial
*******************************************************************************/
#include <stdio.h>

int idade = 0, dias = 0;

void diasIdade(int idade);

int main()
{
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    while(idade > 150)
    {
        scanf("%d", &idade);
    }
    diasIdade(idade);
}

void diasIdade(int idade)
{
    dias = idade * 365;
    printf("A sua idade em dias é: %d", dias);
}
