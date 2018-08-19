#include <stdio.h>

int main ()
{
	int a, b, c, r2, r3, r4, r5, r6, r7, r8, o1, o2, o3, o4, o5, o6, o7, o8;
	
	system("color 0a");
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	b= a/8;
	c= a%8;
	
	o1= c/8;
	r2= c%8;
	
	o2= r2/8;
	r3= r2%8;
	
	o3= r3/8;
	r4= r3%8;
	
	printf("Rsultado em octal: %d%d%d%d%d", r4, r3, r2, b, c);
	
	
	
	
	
	
}
