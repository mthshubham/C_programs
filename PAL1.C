#include<stdio.h>
#include<conio.h>
void main()
{
int n,x,i,rev,r;
n=5;
clrscr();
for(i=11;n>0;i++)
{
	x=i;
	 rev=0;
	while(x>0)
		{
		r=x%10;
		x=x/10;
		rev=rev*10+r;
		}
	if(rev==i){printf("%d  ," ,rev);n--;}
}

getch();

}