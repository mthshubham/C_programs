#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class library
{
	public:
	char c;
	char nm1[25],nm2[25];
	int mn1,i;




	public:
	void input()
	{
	       cout<<"Do you want to continue Y/N";
	       cin>>c;
	       if(c=='y'||c=='Y')
	       {
			cout<<"Successfully login"<<endl;
	       }
	       else
	       {
		cout<<"\n Error"<<endl;
	       }//end of if else
	}//emd of input function

};
void main()
{
	library q;
	 int a,p,D,r,s;
	 char t[25],b;

       //	library.q;
	cout<<"\nPress 1 to Staffloging "<<endl;
	cout<<"\nPress 2 to Studentloging "<<endl;
	cout<<"\nEnter your choice "<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"Enter your name: ";
			cin>>q.nm1 ;
			cout<<"Enter your MObile No :";
			cin>>q.nm1 ;
			q.input();
			pritika:
			cout<<"press 1 to view book ";
			cout<<"press 2 to Borrow book";
			cout<<"Enter your choice ";
			cin>>p;
		switch(p)
		{
			 case 1:
			 cout<<"Enter Book Type";
			 cin>> t;
			 if(t=="Anthology"|| t=="anthology" ||t=="chick"|| t=="Chick" ||t=="Mysterg" ||t=="mysterg" ||t=="poetry" ||t=="Poetry" ||t== "Western"||t=="western")
			 {
				cout<<" Availability Book ";
			 }
			 else
			 {
			       cout<<" Availability Book ";
			 }
			 break;

			case 2:
			cout<<"Enter Borrow Book Name ";
			cin>>b;
			cout<<"Enter Borrow Book Date ";
			cin>>D;
			cout<<"Enter Return Book Date";
			cin>>r;
			break;
			default:
			{goto pritika;}
}//end of switch case
case 2: //for staffloging
		cout<<"Enter your name";
		cin>>q.nm2;
		cout<<"Enter Id: ";
		cin>>q.i;
	       //	fflush(stdin);
		q.input();
		cout<<"Press 1 to Show which student has Borrow the Book";
		cout<<"press 2 to Quit";
		cin>>s;
		switch (s)
		{
			case 1:
				cout<<"Borrow Book Name is"<<b;
				cout<<"Borrow Book Date is"<<D;
				cout<<"Borrow Return Date is "<<r;
				break;
			case 2:
				 goto pritika;

			default:
				cout<<"Invalid choice";
			}//end of switch case

}//end of main
}










