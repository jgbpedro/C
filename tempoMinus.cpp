#include<stdio.h>
MAINICON ICON"tempo.ico"
//calcular tempo

int main(){
	
int s=0,m=0, h=0,somas=0, somam=0, i=0;
int n;
int seg=0, min=0, hor=0, j=0, k=0, segundos, minutos, minutos2, horas;
int hs, ms, st;

	system("color 0a");
	puts("**************Calculo do Tempo**************\n");
	
	printf("Quantidade de Videos: ");
	scanf("%d", &n);


while(i<n){
	
	i++;
	
	printf("\nMinutos: ");
	scanf("%d", &m);
	
	somam+=m;
	
	printf("Segundos: ");
	scanf("%d", &s);

	somas+=s;
	
	}	
	
	printf("\nMin.: %d\n", somam);
	printf("Seg.: %d", somas);
			
	hs= h*3600;
	m= somam*60;
	st= hs+m+somas;
	
	segundos= st%60;
	minutos= (st-segundos)/60;
	minutos2= minutos%60;
	horas= (minutos-minutos2)/60;
	
	printf("\n\nTempo: %d:%d:%d\n\n", horas, minutos2, segundos);

	system("pause");
	return 0;
}


