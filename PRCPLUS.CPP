#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

 class calculate{
 private:
 int a,b,c;

 public:
 void indata(int x,int y){ a=x;b=y;}
 int printout(){ c=add();return c;}

 private:
 int add(){ return a+b;}



 };



 void main ()
 {
 clrscr();

 calculate one;
 one.indata(5,4);
 //re=one.printout();
 cout<<one.printout();
 getch();
 }