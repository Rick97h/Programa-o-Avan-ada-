
#include <stdio.h>

1) Informar em qual das três posições colocadas está o maior número.

int main()
{
    // variaveis
    int a,b,c,posi, maior;
    
    // entrada
    printf("digite 3 numeros:");
    scanf("%d %d %d", &a,&b,&c);
    
    // processamento
    maior=a; posi=1;
    if (b>maior) {maior=b; posi=2;}
    if (c>maior) {maior=c; posi=3;}
    
    //saida
    printf("maior esta na posicao %d", posi);

    return 0;
}
