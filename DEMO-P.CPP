#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 clrscr();
 char nm[25],f[25];
 int m1=0,m2=0,m3=0,t=0,a=0,r=0;
//gotoxy(1,2);
 printf("Enter Student Name:- ");
scanf("%s",&nm);
//gotoxy(1,3);
printf("Enter Student Father Name:- ");
scanf("%s",&f);
printf(" ");
printf("Enter Student RollNo:- ");
scanf("%d",&r);
printf("Enter Student First Subject marks:-");
scanf(" %d",&m1);
printf("Enter Student 2nd Subject marks:-");
scanf(" %d",&m2);
printf("Enter Student 3rd Subject marks:-");
scanf(" %d",&m3);
t=m1+m2+m3;  a=t/3;
 printf("ษออออออออออออออออออออPREETIKAออออออออออออออออออออออป\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บออออออออออออออออออออออออออออออออออออออออออออออออออบ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ                                                  บ\n");
 printf("บ						   บ\n");
 printf("ศออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
 gotoxy(1,3);
 printf("บStudent Name:-%s",nm);
 gotoxy(1,4);
 printf("บStudent Father Name:-%s",f);
 gotoxy(1,5);
 printf("บStudent Rollno:-%d",r);
 gotoxy(1,10);
 printf("บStudent 1st subject mark = %d",m1);
 gotoxy(1,12);
 printf("บStudent 2nd subject mark = %d",m2);
 gotoxy(1,14);
 printf("บStudent 3rd subject mark = %d",m3);
gotoxy(2,20);
 printf("Total marks= %d",t);
gotoxy(9,20);
 printf("\nบAverage mark = %d",a);
 textcolor(RED+BLINK);
cprintf("\nบTHANK YOU \1");
 getch();
 }