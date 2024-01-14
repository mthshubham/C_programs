//#include<s.h> // conio.h, stdio.h, dos.h
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Starting writing code
int *locate(int i){
int *data;
data=(int *) malloc(i);
if(data==NULL){ printf("Error"); exit(1);}
return data;
}

void main(){
clrscr();
int i,*p;
printf("Enter size =");
scanf("%d",&i);
p=locate(i);
printf("\n");
for(int j=0;j<i;j++)
{
scanf("%d",&p[j]);
printf(" %d\n",p[j]);
}
getch();
free(p);
}