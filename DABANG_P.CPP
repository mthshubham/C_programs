#include<stdio.h>
#include<conio.h>
void main()
{
int indata,data=0;
clrscr();
printf("Enter height of number pyramid =" );
scanf("%d",&indata);
printf("\n\n");
data=indata;
for(int run=indata;run>=1;run--)
{



	for(int i=1;i<=data;i++)
	{ printf(" %d ",i); }

       if(i<=indata)
	{
	 int c=(indata*2)-(i*2-2);
	 for(c;c>=1;c--)
	{
	  printf(" * ");
	 }
	 }
	for(int j=i-1;j>=1;j--)
	{ printf(" %d ",j); }

	printf("\n");
	data--;
}
getch();
}