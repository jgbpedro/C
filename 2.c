#include <stdio.h>

int main ()
{
	int v1, v2, v3;
	float media;
	
	printf("Valor 1: ");
	scanf("%d", &v1);
	
	printf("Valor 2: ");
	scanf("%d", &v2);
	
	printf("Valor 3: ");
	scanf("%d", &v3);
	
	media= v1+v2+v3;
	
	printf("Media: %f", media/3);
	
}
