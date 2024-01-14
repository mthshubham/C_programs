#include<stdio.h>
#include<conio.h>
#define enc 10;

void start(void);
void end(void);
#pragma startup start
#pragma exit end



void main()
{

}


void start(void)
{
	char data1[]=__DATE__;
	int i=0 ;
	clrscr();
	printf("hello pragma\n %s\n",__DATE__);
	while(data1[i]!='\0'|| kbhit())
	{
		printf("\n %d= %c ",i-1,data1[i++]);
	}

}

void end(void)
{
printf("\n\t\t\tHello end");
getch();
}