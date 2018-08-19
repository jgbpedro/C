#include <stdio.h>

int main(){
	
	int s=249, m=200, h=2, seg=0, min=0, hor=0, j=0, k=0, segundos, minutos, minutos2, horas;
	
	int hs, ms, st;
	
	hs= h*3600;
	ms= m*60;
	st= hs+ms+s;
	
	segundos= st%60;
	minutos= (st-segundos)/60;
	minutos2= minutos%60;
	horas= (minutos-minutos2)/60;
	
	printf("Segundos: %d", segundos);
	printf("Minutos: %d", minutos2);
	printf("Horas: %d", horas);
}
