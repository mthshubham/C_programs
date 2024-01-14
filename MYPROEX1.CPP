#include<stdio.h>
#include<conio.h>
#include<string.h>
void calculator();
void temperature();
void sizeLimitOfDATAtype();
void simpleInt();
void cuCo();
void electrBill();
void main()
{
int appChoose=0;
char ye,pass[20];
clrscr();
yep:
printf("\nEnter Password:-");
//scanf("%s",pass);
gets(pass);
if((strcmp(pass,"it\'s me Shubham"))==0)
{
yes:
clrscr();

printf("\t* * * * * * * * * *\n");
printf("\t*     HELLO       *\n");
printf("\t* * * * * * * * * *\n");
printf("\n\t\t\t\t\t  * * * * * * * * * * * *  *\n");
printf("\t\t\t\t\t*   S.N.S College            *\n");
printf("\t\t\t\t\t*  -----------------         *\n");
printf("\t\t\t\t\t*  SHUBHAM SHARMA            *\n");
printf("\t\t\t\t\t*  Roll No:- 2040316         *\n");
printf("\t\t\t\t\t*  Mob  No:- 7260882890      *\n");
printf("\t\t\t\t\t*  Chhatauni Motihari        *\n");
printf("\t\t\t\t\t  * * * * * * * * * * * * *   \n");

printf("\nPLEASE CHOOSE YOUR APP\n");
printf("\nFor   calculator press=1");
printf("\nFor Temperature  press=2");
printf("\nFor simple intr  press=3");
printf("\nFor currency con press=4");
printf("\nFor Electric Bill press=5");
printf("\nFor Size and Limit of Data type press=6\n");
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
case 3:
simpleInt();
break;
case 4:
cuCo();
break;
case 5:
electrBill();
break;
case 6:
sizeLimitOfDATAtype();
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
else if((strcmp(pass,"exit"))==0)
{goto exi;}
else
{
clrscr();
printf("Wrong password .....");
printf("\n\nFor exit input exit in password\n");
goto yep;}
exi:

}
//CALCULATOR DEFINING *****************************    1

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
//TEMPERATURE DEFINING ***********************     2
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
//*****Simple Interest************************************************* 3
void simpleInt()
{
float pi,rt,time,si;
char ye;
yes:
clrscr();
printf("***********Simple Interest Selected****************");
printf("\nEnter Principal ,Rate=");
scanf("%f,%f",&pi,&rt);
printf("\nEnter Year (if Month press 0)=");
scanf("%f",&time);
if(time==0)
{
printf("Enter month");
scanf("%f",&time);
time=time/12;
}
else
{
si=pi*rt*time/100;
printf("\nSimple Interest=%.2f",si);
}
printf("\n\nEnter y for again calculation=");
ye=getche();
if(ye=='y'){goto yes;}
else
{printf("\n\n********Thanky*********");
printf("\n\t\t\t\t*\t*");
printf("\n\t\t\t*\t\t\t*");
printf("\n\t\t*\t\t\t\t\t*");
printf("\n\t*\t\t\t\t\t\t\t*");
printf("\n*\t\t\t\t\t\t\t\t\t*");
}
//getch();
}



//***Program to find out the size and limits of data types************** 8

void sizeLimitOfDATAtype()
{
clrscr();
printf("\n*******Size and Limits of Data Types Selected*******\n");

	printf("sizeof(char) = %u\n",sizeof(char));
	printf("sizeof(short) = %u\n",sizeof(short));
	printf("sizeof(int) = %u\n",sizeof(int));
	printf("sizeof(long) = %u\n",sizeof(long));
	printf("sizeof(float) = %u\n",sizeof(float));
	printf("sizeof(double) = %u\n",sizeof(double));
	printf("sizeof(long double) = %u\n",sizeof(long double));

       /*	printf("SCHAR_MIN = %d\n",SCHAR_MIN);
	printf("SCHAR_MAX = %d\n",SCHAR_MAX);
	printf("UCHAR_MAX = %d\n",UCHAR_MAX);

	printf("SHRT_MIN = %d\n",SHRT_MIN);
	printf("SHRT_MAX = %d\n",SHRT_MAX);
	printf("USHRT_MAX = %u\n",USHRT_MAX);

	printf("INT_MIN = %d\n",INT_MIN);
	printf("INT_MAX = %d\n",INT_MAX);
	printf("UINT_MAX = %u\n",UINT_MAX);

	printf("LONG_MIN = %ld\n",LONG_MIN);
    printf("LONG_MAX = %ld\n",LONG_MAX);
    printf("ULONG_MAX = %lu\n",ULONG_MAX);

	printf("FLT_MIN = %e\n",FLT_MIN);
	printf("FLT_MAX = %e\n",FLT_MAX);

	printf("DBL_MIN = %e\n",DBL_MIN);
	printf("DBL_MAX = %e\n",DBL_MAX);

	printf("LDBL_MIN = %e\n",LDBL_MIN);
	printf("LDBL_MAX = %e\n",LDBL_MAX);

	/*Number of digits of precision*/
     /*	printf("FLT_DIG = %d\n",FLT_DIG);
	printf("DBL_DIG = %d\n",DBL_DIG);
	printf("LDBL_DIG = %d\n",LDBL_DIG);
	return 0;*/
printf("\n\n********Thanky*********");
}
//*************ELECTRIC BILL PAYMENT*******************************   5
#define low 1.50
#define mid 2.00
#define up 2.50
#define high 3.25
void electrBill()
{
int sR,eR,read;
float bill;
char ye;
yes:
clrscr();
printf("\n*******Electric Bill Payment Selected*******\n");
printf("\nEnter Last Amount paid Reading=");
scanf("%d",&sR);
printf("Enter Current Reading=");
scanf("%d",&eR);
read=eR-sR;
printf("You Consumed K.W.H=%d",read);
if(read>=501)
{bill=read*high;printf("\nYou have to pay=%.2f",bill);}
else if(read>=301)
{bill=read*up;printf("\nYou have to pay=%.2f",bill);}
else if(read>=101)
{bill=read*mid;printf("\nYou have to pay=%.2f",bill);}
else if(read>=1)
{bill=read*low;printf("\nYou have to pay=%.2f",bill);}
else
{printf("\nEnter correct value\n");}
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
getch();
}

//*************Currency Converter*******************************   6

void cuCo()
{
int cho;
float a,r;
char ye;
yes:
clrscr();
printf("*******CURRENCY Converter SELECTED*******\n");
printf("\nPLEASE CHOOSE YOUR SELECTION\n");
printf("\nFor   Rupees  to Dollar  press=1");
printf("\nFor  Dollar  to Rupees   press=2");
printf("\nFor Rupees (INC) to Nepali Currency (Nc)  press=3");
printf("\nFor Indian   to Japenese Yen  press=4");
printf("\nFor Japenese Yen  to Indian Rs  press=5\n");
printf("\t==>");
scanf("%d",&cho);
switch(cho)
{
case 1:
printf("\nEnter Rupees=");
scanf("%f",&a);
r=a*0.0144;
printf("\n%.2f Rupees =%.2f Dollar",a,r);
break;
case 2:
printf("\nEnter Dollar=");
scanf("%f",&a);
r=a/0.0144;
printf("\n%.2f Dollar =%.2f Rupees",a,r);

break;
case 3:
printf("\nEnter Rupees=");
scanf("%f",&a);
r=a*1.60;
printf("\n%.2f Rupees =%.2f Nepali",a,r);

break;
case 4:
printf("\nEnter Rupees=");
scanf("%f",&a);
r=a*1.5456;
printf("\n%.2f Rupees =%.2f Japenese yen",a,r);

break;

case 5:
printf("\nEnter Japenese=");
scanf("%f",&a);
r=a/1.5456;
printf("\n%.2f Rupees =%.2f Japenese yen",a,r);
break;
default:
printf("\nChoose Proper Number:-");
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

getch();
}
