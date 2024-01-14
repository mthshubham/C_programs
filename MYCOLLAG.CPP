#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

/******************* Library Class ***********************/
class library {
 private:

};

/********  Log In Class **************/
class login{
 private :
 char name[25],mobno[25];
 int id;

 public:
 void adduser()
 {

 id=1++;
 cout<<"\t Enter user Name: ";
 cin>>name;
 cout<<"\t Enter user Mob no: ";
 }
 void showuser()
 {
  cout<<id<<endl;
  cout<<name<<endl;
  cout<<mobno<<endl;
 }
};

/************* Main ************************/

void main()
{
login one;
clrscr();
