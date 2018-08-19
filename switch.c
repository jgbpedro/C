#include <stdio.h>

int main ()
{
	char n;
	
	printf("Digite um numero: ");
	scanf("%c", &n);
	
	switch (n)
	{
		case '1': printf("\nUm"); break;
		case '2': printf("\nDois"); break;
		case '3': printf("\nTres"); break;
		case '4': printf("\nQuatro"); break;
		case '5': printf("\nCinco"); break;
		case '6': printf("\nSeis"); break;
		case '7': printf("\nSete"); break;
		case '8': printf("\nOito"); break;
		case '9': printf("\nNove"); break;
		case '10': printf("\nDez"); break;
	}

}
