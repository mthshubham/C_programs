#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char nm[25];
	int i=0, co;
	printf("Enter any string=\n");
	scanf("%s",&nm);

       //	nm=nm+32;
	while(nm[i]!='\0')
	{
	co=(int)nm[i];
	co+=32;
	nm[i]=(char)co;
	i++;
	}

	 printf("%s",nm);
	 getch();
	}