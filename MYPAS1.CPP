#include<stdio.h>
#include<conio.h>
#include<string.h>
void calculator();
void temperature();
/*void simpleInt();
void electrBill(); */
void main()
{
int appChoose=0;
char ye,pass[20];
yep:
printf("Enter Password:-");
scanf("%s",pass);
if((strcmp(pass,"friend"))==0)
{
yes:
clrscr();

printf("\t* * * * * * * * * *\n");
printf("\t*     HELLO       *\n");
printf("\t* * * * * * * * * *\n");
printf("\nPLEASE CHOOSE YOUR APP\n");
printf("For   calculator press=1");
printf("\nFor Temperature  press=2");
printf("\nFor simple intr  press=3");
printf("\nFor currency con press=4\n");
printf("\t==>");
scanf("%d",&appChoose);
switch(appChoose)
{
case 1:
calculator();
break;
case 2:
temperature();
break;
default:
printf("\nChoose Proper Number:-");
}

printf("\nPRESS y FOR RUN AGAIN THIS PROGRAM ==>");

ye=getche();
if(ye=='y'){goto yes;}
else
printf("\n\n\t****** THANKY FOR USING THIS PROGRAM ********\n\n\n\n");
printf("\t\t\t\t\t* * * * * * * * * *\n");
printf("\t\t\t\t\t*  SHUBHAM SHARMA *\n");
printf("\t\t\t\t\t* * * * * * * * * *\n");
}
else
goto yep;
getch();
}
//CALCULATOR DEFINING *****************************

void calculator()
{
float a,b,r;
char o,ye;
yes:
clrscr();
printf("*******CALCULATOR SELECTED*******");


printf("\nEnter like this (a+b) (a*b) (a-b) (a/b)\n");
scanf("%f%c%f",&a,&o,&b);
switch(o)
{
case'+':r=a+b;break;
case'-':r=a-b;break;
case'*':r=a*b;break;
case'/':r=a/b;break;
default:
printf("Enter correct operator");
}
printf("\r=%.3f",r);
printf("\nEnter y for again calculation=");
ye=getche();
if(ye=='y'){goto yes;}
else
printf("\n\n********Thanky*********");
}
//TEMPERATURE DEFINING ***********************
void temperature()
{
float ce=0,fa=0;
char op,ye;

yes :
clrscr();
printf("\n*******Temperature Selected*******\n");

printf("\nFor celcius to farenheit press (c)\n");
printf("For farenheit to celcius press (f)\n");
printf("\t==>");
op=getche();
if(op=='c')
{
printf("\nEnter value of Celcius=");
scanf("%f",&ce);
fa=1.8*ce+32;
printf("\nFarenheit=%.2f",fa);
}
else
{
printf("\nEnter value of Farenheit=");
scanf("%f",&fa);
ce=0.55556*(fa-32);
printf("\nCelcius=%.2f",ce);
}
printf("\nEnter y for again calculation=");
ye=getche();
if(ye=='y'){goto yes;}
else
printf("\n\n********Thanky*********");
printf("\n\t\t\t\t*\t*");
printf("\n\t\t\t*\t\t\t*");
printf("\n\t\t*\t\t\t\t\t*");
printf("\n\t*\t\t\t\t\t\t\t*");
printf("\n*\t\t\t\t\t\t\t\t\t*");

}
