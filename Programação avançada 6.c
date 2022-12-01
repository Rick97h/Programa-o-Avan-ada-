//Saber o salário total de um funcionário:

int main()
{
    // Váriaveis
    float salFixo, vendas, salTotal;
    
    //entrada
    printf("Digite o seu salário fixo: ");
    scanf("%f", &salFixo);
    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);
    
    //processamento
    if (vendas > 1500)
     salTotal = 1500 * 3 / 100 + (vendas - 1500) * 5 / 100;
   
    else
    salTotal = 1500 * 3 / 100;
    
    //Saída
    salTotal = salTotal + salFixo;
    printf("%0.3f", salTotal);

    return 0;
}
