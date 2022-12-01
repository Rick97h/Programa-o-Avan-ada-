7) Ler a idade e o total de dias que o indíviduo está vivo.

int main()
{
    int idade, calculo;
   
    printf("Digite sua idade ");
   
    scanf("%d", &idade);
    calculo = idade * 365;
   
    while(idade < 0){
        printf("Idade não pode ser negativa!");
        scanf("%d", &idade);
    }
    
    printf("Você tem %d anos, e está vivo por %d dias!", idade, calculo);
   
    return 0;
}
