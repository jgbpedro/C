#include <stdio.h>

int main ()
{
	int n, m;
	
	
	system("color 0a");
	
	while (n!=-1){
	
	printf("\nDigite um Numero: ");
	scanf("%d", &n);
	
	m=n;
	
	for (n=0; n<m; n++)
	{
		printf("%d ", n);
	}
}
}
