#include <stdio.h>

int main(){
	
	int s=240, m=200, h=2, seg=0, min=0, hor=0, j=0, k=0, segundos, minutos, horas;
	
	int hs, ms, st;
	
	hs= h*3600;
	ms= m*60;
	st= hs+ms+s;
	
	while(j!=st)
	{	
	j++;
	
		if(j<=60)		
		{
			min++;
			st= st-60;
			j=0;
		}		
	}
	
	segundos=j;
	minutos=min;
	
	while(k!=minutos)	
	{
	k++;
		
		if(k<=60){
			hor++;
			minutos= minutos-60;
			k=0;
			
		}
		
	}
			printf("%d:%d:%d", hor, k, j);

	}
	
	
	
