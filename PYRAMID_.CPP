#include<stdio.h>
#include<conio.h>
void main()
{
int indata,data=0;
clrscr();
printf("Enter height of number pyramid =" );
scanf("%d",&indata);
printf("\n\n");

for(int run=indata;run>=1;run--)
{
	for(int space=0;space<=run;space++)
	{ printf(" "); }

	data++;

	for(int i=1;i<=data;i++)
	{ printf(" %d ",i); }

	for(int j=i-2;j>=1;j--)
	{ printf(" %d ",j); }

printf("\n");
}
getch();
}