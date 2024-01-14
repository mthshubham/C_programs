#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100

// Structure to store a contact
typedef struct {
  char name[50];
  char phone[20];
  char email[50];
} Contact;

// Array of stucture to store all contacts
Contact contacts[MAX_CONTACTS];

// Number of contacts stored
int numContacts = 0;

// Function prototypes
void addContact();
void listContacts();
void searchContacts();
void updateContacts();
void deleteContacts();
/*------------------------------------------------------------------
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


printf("\nPLEASE CHOOSE YOUR APP\n");






-------------------------------------------------------------------*/


void info(void);
void print1(void);
void print2(void);
void print3(void);
void print4(void);
void print5(void);
void print6(void);

void main ()
{
int i=0;
char key;
clrscr();

// Enter in Navigation menu and calling working functions
while(1)
{
if(key==80 || i==0){i++;if(i>6){i=1;}}
if(key==72 || i==0){i--;if(i<1){i=6;}}
if(i==1){print1();}
if(i==2){print2();}
if(i==3){print3();}
if(i==4){print4();}
if(i==5){print5();}
if(i==6){print6();}
//printf("\n =%d",i);
key=getch();
if(key==13&&i==1){addContact();}
if(key==13&&i==2){listContacts();}
if(key==13&&i==3){searchContacts();}
if(key==13&&i==4){updateContacts();}
if(key==13&&i==5){deleteContacts();}
if(key==13&&i==6){break;}
}

}
//*************  Main End
void info(){
printf("\t* * * * * * * * * *\n");
printf("\t*     HELLO       *\n");
printf("\t* * * * * * * * * *\n");
printf("\n\t\t\t\t\t  * * * * * * * * * * * * * *\n");
printf("\t\t\t\t\t*   S.N.S College             *\n");
printf("\t\t\t\t\t*  -----------------          *\n");
printf("\t\t\t\t\t*  PREETIKA SHARMA            *\n");
printf("\t\t\t\t\t*  Roll No:- 0040000          *\n");
printf("\t\t\t\t\t*  Mob  No:- 0000000000       *\n");
printf("\t\t\t\t\t*      Motihari               *\n");
printf("\t\t\t\t\t  * * * * * * * * * * * * * * *\n");

}

void print1(){
clrscr();
info();
textbackground(4);
cprintf("1. Add a contact\n");
textbackground(0);
printf("\r2. List all contacts\n");
printf("\r3. Search for a contact\n");
printf("\r4. Update a contact\n");
printf("\r5. Delete a contact\n");
printf("\r6. Quit\n");

}

void print2(){
clrscr();
    info();
    printf("\r1. Add a contact\n");
    textbackground(4);
    cprintf("2. List all contacts\n");
    textbackground(0);
    printf("\r3. Search for a contact\n");
    printf("\r4. Update a contact\n");
    printf("\r5. Delete a contact\n");
    printf("\r6. Quit\n");

}

void print3(){
clrscr();
    info();
    printf("\r1. Add a contact\n");
    printf("\r2. List all contacts\n");
    textbackground(4);
    cprintf("3. Search for a contact\n");
    textbackground(0);
    printf("\r4. Update a contact\n");
    printf("\r5. Delete a contact\n");
    printf("\r6. Quit\n");
}

void print4(){
clrscr();
    info();
    printf("\r1. Add a contact\n");
    printf("\r2. List all contacts\n");
    printf("\r3. Search for a contact\n");
    textbackground(4);
    cprintf("4. Update a contact\n");
    textbackground(0);
    printf("\r5. Delete a contact\n");
    printf("\r6. Quit\n");
}

void print5(){
clrscr();
    info();
    printf("\r1. Add a contact\n");
    printf("\r2. List all contacts\n");
    printf("\r3. Search for a contact\n");
    printf("\r4. Update a contact\n");
    textbackground(4);
    cprintf("5. Delete a contact\n");
    textbackground(0);
    printf("\r6. Quit\n");

}

void print6(){
clrscr();
    info();
    printf("\r1. Add a contact\n");
    printf("\r2. List all contacts\n");
    printf("\r3. Search for a contact\n");
    printf("\r4. Update a contact\n");
    printf("\r5. Delete a contact\n");
    textbackground(4);
    cprintf("6. Quit\n");
    textbackground(0);
}

//--------------------------Function ---------------------------------

void addContact() {
  if (numContacts == MAX_CONTACTS) {
    printf("Error: Maximum number of contacts reached.\n");
    return;
  }

  printf("Enter name: ");
  scanf("%s", contacts[numContacts].name);

  printf("Enter phone number: ");
  scanf("%s", contacts[numContacts].phone);

  printf("Enter email: ");
  scanf("%s", contacts[numContacts].email);

  numContacts++;
}

void listContacts() {
  int i;

  if (numContacts == 0) {
    printf("No contacts to display.\n");
    return;
  }

  printf("\nSNo:\t Name\t\tPhone\t\tEmail\n");
  for (i = 0; i < numContacts; i++) {
    printf("%d\t%s\t\t%s\t\t%s\n",numContacts, contacts[i].name, contacts[i].phone, contacts[i].email);
  }
getch();
}

void searchContacts() {
  char name[50];
  int i;

  printf("Enter name to search for: ");
  scanf("%s", name);

  for (i = 0; i < numContacts; i++) {
    if (strcmp(contacts[i].name, name) == 0) {
      printf("\nName\t\tPhone\t\tEmail\n");
      printf("%s\t\t%s\t\t%s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
      return;
    }
  }

  printf("Contact not found.\n");
  getch();
}
/************* Fun End ***************************************/
void deleteContacts(){
printf("\n \t work is under progress");
}

/*void deleteContact() {
    int i;
    for (i = 0; i < numContacts; i++) {
	if (strcmp(contacts[i].name, name) == 0) {
	    // Shift all subsequent contacts one position to the left
	    int j;
	    for (j = i; j < numContacts - 1; j++) {
		strcpy(contacts[j].name, contacts[j + 1].name);
		strcpy(contacts[j].phone, contacts[j + 1].phone);
	    }
	    numContacts--;
	    return;
	}
    }

    printf("Error: Contact not found.\n");
}
*/
void updateContacts() {
    int i=0;
    printf("Enter Contact Serial No: ");
    scanf("%d",&i);
    i--;
    if(i>=0 && i<=numContacts)
	{
	 int ch=0;
	 clrscr();
	 while (ch!=4) {
	 printf("\n 1. Change name \n");
	 printf(" 2. Change Phone \n");
	 printf(" 3. Change Email \n");
	 printf(" 4. Exit \n");
	 printf("==> ");
	 scanf("%d",&ch);
	 switch(ch) {
	 case 1:
		printf("Old name: %s \n",contacts[i].name);
		printf("New name: ");
		scanf("%s", contacts[i].name);
		printf("\n\n \t Name is updated ");
		break;
	 case 2:
		printf("Old Phone: %s \n",contacts[i].phone);
		printf("New Phone: ");
		scanf("%s",contacts[i].phone);
		printf("\n\n \t Phone is updated ");
		break;
	 case 3:
		printf("Old e-mail: %s \n",contacts[i].email);
		printf("New e-mail: ");
		scanf("%s",contacts[i].email);
		printf("\n\n \t email is updated ");
		break;

	 case 4:
		break;

	 default :
		printf("\n Choose proper function: \n");
		break;
	 }
	 }
	 return;
	}


    printf("\n==> Error: Contact not found.\n");

}
