#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char c[1000];

clrscr();

while(c[i-1]!=19)
{
c[i++]=getche();
if(c==13)printf("\n");
}


getch();
}