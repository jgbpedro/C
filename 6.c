#include <stdio.h>

int main()
{
	int n1, n2, r;
	char o;
	
	printf("Digite uma Operacao: ");
	scanf("%d %c %d", &n1, &o, &n2);
	
	switch (o)
	{
	case '+': 
	r=n1+n2;
	printf("\nResultado: %d", r); break;
	
	case '-': 
	r=n1-n2;
	printf("\nResultado: %d", r); break;
	
	case '*': 
	r=n1*n2;
	printf("\nResultado: %d", r); break;
	
	case '/': 
	r=n1/n2;
	printf("\nResultado: %d", r); break;
	
}
}
