5) Imprimir um retângulo de triângulos.

void imprimeRetangulo (int lin, int col) {
    for (int l=1; l<=lin; l++){
        for (int c=1; c<=col; c++)
            printf ("*");
        printf ("\n");
    }
}
int main()
{
    int l, c;
    printf ("Linhas? ");
    scanf ("%d", &l);
    printf ("Colunas? ");
    scanf ("%d", &c);
    imprimeRetangulo(l,c); 
    return 0;
}
