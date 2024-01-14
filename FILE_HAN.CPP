#include<stdio.h>
#include<conio.h>
#define enc 10;



void main()
{
FILE *fp;
char ch;
if(( fp=fopen("1fileHandle.txt","wb"))==NULL)
{printf("Eroor in opening file"); }
else
{
clrscr();
printf("Enter data\n");
while((ch=getchar())!=EOF)
{
ch+=enc;
fputc(ch,fp);
}
fclose(fp);
}


}