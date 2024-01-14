#include<stdio.h>
#include<conio.h>
void main()
{
int r,x,d=0;
clrscr();
x=11;
while(x>0)
	{
	r=x%2;
	x=x/2;
	d=d*10+r;
	}
while(d>0)
	{
	r=d%10;
	d=d/10;
	printf(" %d",r);
	}

getch();
}