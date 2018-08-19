#include <stdio.h>

int main()
{
	
	int segundos, hora, minutos;
	
	printf("Quantidade de Segundos: ");
	scanf("%d", &segundos);
	
	minutos = segundos/3600;
	hora = minutos/60;

	
	printf("Horas: %d \nMinutos: %d \nSegundos: %d", hora, minutos, segundos);
	
}
