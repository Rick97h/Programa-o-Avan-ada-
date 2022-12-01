//Imprimir um quadrado de esteriscos.

void imprimeRetangulo (int n) 
{
    for (int l=1; l<=n; l++)
    {
        for (int c=1; c<=n * 5; c++)
            printf ("*");
            
        printf ("\n");
    }
}

int main()
{
    int n;
    printf("Qual o tamanho desejado: \n");
    scanf("%d", &n);
    printf("Quadrado de %d\n", n);
    
    imprimeRetangulo(n);
    
    return(0);
}
