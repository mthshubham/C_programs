#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j;
printf("Enter n=");
scanf("%d",&n);
clrscr();
for(i=0;i<=n;i++)
{
  for(j=1;j<=i;j++)
   {
    printf(" %d ",j);
   }
  for(j;j>=1;j--)
  {
   printf(" %d ",j);
  }
printf("\n");
}

getch();
}