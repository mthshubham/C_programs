#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void menu(void);
void graphics(void);
void print1(void);
void print2(void);
void print3(void);
void print4(void);


/************************** Main ********************************/

void main ()
{

menu();
}

/* ****************     Main close         ***********************/

void graphics()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

}
void topgraphic()
{

}



/**************  Menu *********************** */
void menu ()
{

int i=0;
char key;
clrscr();
while(1)
{
if(key==80 || i==0){i++;if(i>4){i=1;}}
if(key==72 || i==0){i--;if(i<1){i=4;}}
if(i==1){print1();}
if(i==2){print2();}
if(i==3){print3();}
if(i==4){print4();}

//printf("\n =%d",i);
key=getch();
if(key==13&&i==4){break;}
}
}



void print1(){
clrscr();
textbackground(4);
cprintf("Save");
textbackground(0);
printf("\n\rFind\n\rReplace\n\rExit ");
}
void print2(){
clrscr();
printf("Save");
textbackground(4);
cprintf("\n\rFind");
textbackground(0);
printf("\n\rReplace\n\rExit ");
}
void print3(){
clrscr();
printf("Save\n\rFind");
textbackground(4);
cprintf("\n\rReplace");
textbackground(0);
printf("\n\rExit ");
}
void print4(){
clrscr();
printf("Save\n\rFind\n\rReplace");
textbackground(4);
cprintf("\n\rExit");
textbackground(0);
}


