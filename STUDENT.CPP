#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//******************************  Calculator  *********************

class exam
{

private:
char name[10];
int s1,s2,s3,s4,s5,total;

//*********************************************
public:
 void input_data ()
 {
   cin>>s1>>s2>>s3>>s4>>s5;

 }

void display ()
{
cout<<s1 << "+"<<s2<< "+"<<s3<< "+"<<s4<< "+"<<s5<<endl;
int result;
result=totalmrks();

cout<<result ;
}
//******************************

private :

int totalmrks()
{
return s1+s2+s3+s4+s5;
}


};



// *******************    Main ********************
void main()
{
  exam stu1,stu2,stu3,stu4;
  clrscr();
  stu1.input_data();


  getch();


}



///  Class me student stu1, stud2 =  marks of 5 subject, total marks, pass huwa hai ya nahi
