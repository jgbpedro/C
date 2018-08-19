#include <stdio.h>

//Conversão de decimal para hexadecimal//
int main ()
{
	
	int x, y, z, h1, h2, h3, h4, h5, h6, h7, h8, A, B, C, D, F;
	
	
	system("color 0a");
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	y= x/16;
	z= x%16;
	
	if (y==10) {
		y=A;
	}
	
	
	printf("Exibir divisao: %d", y);
	printf("Exibir resto: %d", z);
	
	printf("Resultado em Hexadecimal: %d%d", z, y);
	
	
	
	
}
