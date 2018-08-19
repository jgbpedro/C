
/* algoritmo : teste todos os divisores */ 
#include <stdio.h> 


int main (void) 
{ 
  int i, nb, contar, teste; 
  
  while (nb!=3){
  
  teste = contar = 0; 
  printf ("Entre um numero inteiro : "); 
  if (scanf ("%d", &nb) != 1) 
    return -1; 

  for (i = 2; i < nb; i++, contar++) 
    if (nb % i == 0) 
      teste = 1; 
  if (!teste) 
    printf ("%d numero primo, nunmero iteracoes = %d\n", nb, contar); 
  else 
    printf ("%d nao eh um numero primo, numero iteracoes = %d\n", nb,contar); 
  } return 0; 
} 
