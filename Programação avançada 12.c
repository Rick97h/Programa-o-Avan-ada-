8) Fazer uma contagem regressiva até 0.

int main()
{
    int num, i;
    printf("Digite um número: ");
    scanf("%d", &num);
   
    for(i=num; i>=0; i--){
        printf("\n %d", i);
    }
   
    for(i=num; i<=0; i++){
        printf("\n %d", i);
    }
   
    return 0;
}
