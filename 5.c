#include <stdio.h>

int main()
{
	
	int v1, v2, v3;
	float media;
	
	puts("Valor 1: ");
	scanf("%d", &v1);
	
	puts("Valor 2: ");
	scanf("%d", &v2);
	
	puts("Valor 3: ");
	scanf("%d", &v3);
	
	media = v1+v2+v3;
	
		if (v1>v2 && v1>v3)
		{
			printf("Maior: %d", v1);
			
		}else if (v2>v1 && v2>v3)
		{
			printf("Maior: %d", v2);
		
		}else
		{
			printf("Maior: %d", v3);
			
		}
		
		
		
		printf("\nMedia: %f", media/3);
}
