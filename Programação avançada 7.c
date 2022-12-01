3) Contar e escrever quantos valores pares as 10 posições do vetor tem.

int main() {
   int v[TAMANHO], totalPares=0;
  
   printf ("(ENTRADA) Digite %d valores\n", TAMANHO);
   for (int i=0; i< TAMANHO ;i++) {
       printf ("v[%d]: ", i);
       scanf ("%d", &v[i]);
   }
   
   for (int i=0; i< TAMANHO ;i++) {
       if (v[i] %2 == 0) totalPares++;
   }

   printf ("\n(SAIDA) A quantidade de pares é %d", totalPares);

    return 0;
}
