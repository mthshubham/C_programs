#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main(){
	union REGS i,o;
	clrscr();

   /* ********************** Checking Status  *********** */
	i.x.ax=0;
	int86(0x33,&i,&o);
	if(o.x.ax==0)
	{
		printf("Mouse not avilable");
		exit();
	}
	printf("Mouse avilable");

   /* ********************** Display Mouse on window  *********** */
	i.x.ax=1;
	int86(0x33,&i,&o);
	getch();
    /* ********************** Display Mouse pointer X , Y  *********** */

	while(!kbhit()){
		i.x.ax=3;
		int86(0x33,&i,&o);
		gotoxy(1,25);
		printf(" ( x= %d , y= %d )",o.x.cx,o.x.dx);
		delay(1000);
		if((o.x.cx>=40 && o.x.cx<=50) && (o.x.dx>=40 && o.x.dx<=50)){printf("ok");}
	}
	getch();

    /* ********************** Returning Mouse to system  *********** */
	i.x.ax=2;
	int86(0x33,&i,&o);
	getch();

}