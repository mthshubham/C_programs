
pasw()
{

char ye,pass[20];
clrscr();
yep:
printf("\nEnter Password:-");
scanf("%s",pass);
if((strcmp(pass,"friends"))==0)
{

clrscr();

printf("\t* * * * * * * * * *\t\t  * * * * * * * * * * * *  *\n");
printf("\t*     HELLO       *\t\t*   S.N.S College            *\n");
printf("\t* * * * * * * * * *\t\t*  -----------------         *\n");
printf("\t\t\t\t\t*  SHUBHAM SHARMA            *\n");
printf("\t\t\t\t\t*  Roll No:- 2040316         *\n");
printf("\t\t\t\t\t  * * * * * * * * * * * * *   \n");
printf("\n-------------------------------------------------------------------------------\n");
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
getch();

}