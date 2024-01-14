#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LEN 50
#define MAX_PHONE_LEN 15

typedef struct {
    char name[MAX_NAME_LEN];
    char phone[MAX_PHONE_LEN];
} Contact;

Contact address_book[MAX_CONTACTS];
int num_contacts = 0;

void add_contact(char *name, char *phone) {
    if (num_contacts == MAX_CONTACTS) {
	printf("Error: Address book is full.\n");
	return;
    }

    strcpy(address_book[num_contacts].name, name);
    strcpy(address_book[num_contacts].phone, phone);
    num_contacts++;
}

void delete_contact(char *name) {
    int i;
    for (i = 0; i < num_contacts; i++) {
	if (strcmp(address_book[i].name, name) == 0) {
	    // Shift all subsequent contacts one position to the left
	    int j;
	    for (j = i; j < num_contacts - 1; j++) {
		strcpy(address_book[j].name, address_book[j + 1].name);
		strcpy(address_book[j].phone, address_book[j + 1].phone);
	    }
	    num_contacts--;
	    return;
	}
    }

    printf("Error: Contact not found.\n");
}

void update_contact(char *name, char *phone) {
    int i;
    for (i = 0; i < num_contacts; i++) {
	if (strcmp(address_book[i].name, name) == 0) {
	    strcpy(address_book[i].phone, phone);
	    return;
	}
    }

    printf("Error: Contact not found.\n");
}

void print_contacts() {
    int i;
    for (i = 0; i < num_contacts; i++) {
	printf("Name: %s\nPhone: %s\n", address_book[i].name, address_book[i].phone);
    }
}

int main() {
    // Add some test contacts
    clrscr();
    add_contact("Alice", "123-456-7890");
    add_contact("Bob", "234-567-8901");
    add_contact("Eve", "345-678-9012");

    // Print all contacts
    print_contacts();

    // Update a contact
    update_contact("Bob", "999-999-9999");

    // Print all contacts
    print_contacts();

    // Delete a contact
    delete_contact("Eve");

    // Print all contacts
    print_contacts();

    return 0;
}
