#include<stdio.h>
#include<conio.h>
void main()
{

int num,i=0,j,rem;
char arr[20];
num=20;
clrscr();
while(num>0)
{
rem=num%2;
num/=2;
arr[i++]= rem;
}
for(j=i-1;j>=0;j--)
{
printf("%d",arr[j]);
}
getch();
}