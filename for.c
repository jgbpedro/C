#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
/* n0 representa F(n), n1 representa F(n-1), e n2 representa F(n-2) */
  int n2=0, n1=1, n0;
/* Variavel para percorrer a sequencia de Fibonacci ate o fim */
  int n;
/* Variavel que guarda o tamanho total da sequencia a ser calculado */
  int N=100;
 
  printf("Sequencia de Fibonacci: \n");
/* Escreve os primeiros 2 elementos na tela */
  printf("%d ", n1);
 
/* Percorre os próximos 18 números da sequência */
  for(n=0; n<=N; n++)
  {
/* F(n) = F(n-1)+F(n-2) */
    n0 = n1+n2;
/* Escreve o numero atual na tela */
    printf("%d ", n0);
/* Atualiza F(n), F(n-1) e F(n-2) para calcular o proximo numero da sequencia */
    n2 = n1;
    n1 = n0;
  }
  printf("\n\n");      
  return 0;
}

