#include<stdio.h>
#include<conio.h>
void print1(void);
void print2(void);
void print3(void);
void print4(void);
void main ()
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
cprintf("Student");
textbackground(0);
printf("\n\rTeacher\n\rHelper\n\rExit ");
}
void print2(){
clrscr();
printf("Student");
textbackground(4);
cprintf("\n\rTeacher");
textbackground(0);
printf("\n\rHelper\n\rExit ");
}
void print3(){
clrscr();
printf("Student\n\rTeacher");
textbackground(4);
cprintf("\n\rHelper");
textbackground(0);
printf("\n\rExit ");
}
void print4(){
clrscr();
printf("Student\n\rTeacher\n\rHelper");
textbackground(4);
cprintf("\n\rExit");
textbackground(0);
}
