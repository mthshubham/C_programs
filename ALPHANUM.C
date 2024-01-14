#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
scanf("%c",&x);
if(x>=48 && x<=57)
printf("\n== given data is Numeric %c",x);
else if (x>=65 && x<=90 || x>=97 && x<=122)
printf("\n== given data is Alplhabet %c",x);
else
printf("\n given data is symbol %c",x);
getch();
}