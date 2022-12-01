// Ler 6 vetores inteiros e imprimir os valores lidos de forma inversa.

int main() {
   int v[TAMANHO];
   
   printf ("(ENTRADA) Digite %d valores\n", TAMANHO);
   for (int i=0; i< TAMANHO ;i++) {
       printf ("v[%d]: ", i);
       scanf ("%d", &v[i]);
   }
   
   printf ("\n(SAÍDA) Em ordem inversa:");
   for (int i= TAMANHO-1 ; i>=0 ; i--) {
        printf ("\nv[%d]: %d", i,v[i]);
   }

    return 0;
}
