#include<stdio.h>
#include<conio.h>

void main()
{
int x ,i,j,k;
x=5;
clrscr();
for(i=1;i<=x;i++)
	{
	for(j=x-i;j>=1;j--){printf(" ");}
	for(k=1;k<=i;k++){printf("%d",k);}
	for(k=k-2;k>=1;k--){printf("%d",k);}
	printf("\n");
	}
for(i=i-1;i<=x;i++)
	{
	for(j=x-i;j>=1;j--){printf("*");}
	//for(k=1;k<=i;k++){printf("%d",k);}
	//for(k=k-2;k>=1;k--){printf("%d",k);}
	printf("\n");
	}







getch();
}