#include <stdio.h>
#include<conio.h>
int main()
{
    // declare a variable
    int asciTable=0;
    clrscr();

    while (asciTable<20) //change value to see more symbols
    {

	printf (" %c= %d ,", asciTable, asciTable);
	asciTable++;
    }
    getch();
    return 0;
}