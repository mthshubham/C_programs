#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\tc\\bgi");
	cleardevice();
	setbkcolor(BLUE);
	setcolor(7);
	bar(0,0,900,20);
	getch();
	closegraph();
	restorecrtmode();
}