#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,n,x,d;
float sum=0;
clrscr();
n=3;
for(i=1;i<=n;i++)
{
x=i;
for(j=1;j<i;j++)
{
x=x*i;
}
d=1;
for(j=1;j<=i;j++)
{d=d*j;}
sum=sum+( (float) x/d);
}

printf("%f",sum);








getch();
}