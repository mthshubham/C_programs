#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n=5;
clrscr();
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{printf("%d",j);}
printf("\n");

for(k=1;k<=i;k++)
{printf(" ");}

}
getch();
}