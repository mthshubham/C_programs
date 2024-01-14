#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i=0,j=0,k=0,n=12,temp=0;
for(i=0;i<=n;i++)
	{
	for(j=0;j<temp;j++)
		{
		printf(" ");
		}
	for(k=0;k<i;k++)
		{
		printf("#");
		}
	temp=temp+k;
	printf("\n");
	}
getch();
}