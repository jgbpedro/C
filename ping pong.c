#include <stdio.h>
#include <conio.h>

int main (){
	
	int x=1, y=1, dx=1, dy=1, i=0;
	
	while (! kbhit() ) {
		gotoxy(x,y);
		putchar('O');
		
		for (i=0; i<40000000; i++);
		gotoxy;
		putchar(' ');
		x += dx;
		y += dy;
		
		if( x==1 || x==80 ) dx = -dx;
		if( y==1 || y==24 ) dy = -dy;
	}
	
	return 0;
}
