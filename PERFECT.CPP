#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=6,j,c=0;
/*for(i=1;i<=6;i++)
{ */
	for(j=1;j<i;j++)
	{
		if(i%j==0){c=c+j; printf("+%d",j);}
	}

	if(c==i){printf("\n== %d",i);}
//}

getch();
}