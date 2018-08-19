#include <stdio.h>

int main()
{
 	int n, n0, n1=1, n2=0, seq=100;
 	
 	printf("Sequencia de Fibonacci: \n");
 	
 	printf("%d ", n1);
 	
 	for (n=0; n<=seq; n++)
 	
 	{
 		n0 = n1+n2;
 		
 		printf("%d ", n0);
 		
 		n2 = n1;
 		n1 = n0;
 		
	}

		printf("\n\n");

}
