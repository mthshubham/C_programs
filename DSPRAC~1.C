#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<dos.h>
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
//void deleteContacts();
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
void main() {
  int choice;
clrscr();
printf("\t* * * * * * * * * *\n");
printf("\t*     HELLO       *\n");
printf("\t* * * * * * * * * *\n");
printf("\n\t\t\t\t\t  * * * * * * * * * * * * * *\n");
printf("\t\t\t\t\t*   S.N.S College             *\n");
printf("\t\t\t\t\t*  -----------------          *\n");
printf("\t\t\t\t\t*  PREETIKA SHARMA            *\n");
printf("\t\t\t\t\t*  Roll No:- 2040316          *\n");
printf("\t\t\t\t\t*  Mob  No:- 7260882890       *\n");
printf("\t\t\t\t\t*  Chhatauni Motihari         *\n");
printf("\t\t\t\t\t  * * * * * * * * * * * * * * *\n");

  while (1) {
 //   clrscr();
    printf("\nAddress Book\n");
    printf("1. Add a contact\n");
    printf("2. List all contacts\n");
    printf("3. Search for a contact\n");
    printf("4. Update a contact\n");
    printf("5. Delete a contact\n");
    printf("6. Quit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
      case 1:
	addContact();
	break;
      case 2:
	listContacts();
	break;
      case 3:
	searchContacts();
	break;
      case 4:
	updateContacts();
	break;
      case 5:
       //	deleteContacts();
	break;
      case 6:
	exit(0);
      default:
	printf("Invalid choice. Try again.\n");
	break;
    }


  printf("\n\n \t \tPress any key " ); getch();
  }



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
}
/************* Fun End ***************************************/
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
