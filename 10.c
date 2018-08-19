#include <stdio.h>

int main()
{
	int n;
	
	while (n!=1)
	{
	
	printf("Digite um Numero:\n");
	scanf("%d", &n);
	
	 
	
	if (n==2 || n==3 || n==5 || n==7 || n%2!=0 && n%7!=0 && n%5!=0 && n%3!=0 && sqrt(n-1)!=0 ){
		
		printf("Numero Primo\n");
		
	} else {
	
		printf("Nao eh Numero Primo!\n");
	}
	
}
	
}

