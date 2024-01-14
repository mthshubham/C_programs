#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	int i=0;
	while(i<=1999)
	{
		textcolor(BLUE);
		cprintf("Û");
		i++;
	} //END OF WHILE
	gotoxy(3,3);
	textbackground(BLUE);
	textcolor(3);
	cprintf("   ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
	gotoxy(7,22);
	textbackground(BLUE);
	textcolor(3);
       cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
	gotoxy(7,2);
	textbackground(BLUE);
	textcolor(3);
	cprintf("Microsoft ScanDisk");
	gotoxy(7,5);
	cprintf("Because Windows was not properly shut down,");
	gotoxy(7,6);
	cprintf("one or more of your disk drives may have errors on it.");
	gotoxy(7,8);
	textcolor(7);
	cprintf("To avoid seeing this message again , always shut down");
	gotoxy(7,9);
	cprintf("your computer by selecting Shut Down frow the Start menu.");
	gotoxy(7,11);
	cprintf("ScanDisk is now checking drive C for errors:");
	gotoxy(5,20);
	textcolor(8);
	cprintf("ÛÛÛÛÛÛÛ");
	gotoxy(11,20);
	textcolor(0);
	cprintf("Ü");
	gotoxy(6,21);
	cprintf("ßßßßßß");
	gotoxy(10,23);
	textcolor(3);
	cprintf(" complete");
	int a=0;
	gotoxy(23,23);
	textcolor(WHITE);
	cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

	while(a<=50)
	{
		gotoxy(23+a,23);
		textcolor(14);
		cprintf("Û");
		gotoxy(5,23);
		textcolor(WHITE);
		cprintf("%d \%",a*2);
		delay(50);
		a++;
	}

	getch();
}