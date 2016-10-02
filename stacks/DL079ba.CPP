// Filename: \\U2Chap09\DL079ba.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
// The structure, and the function of PUSH() and POP() operations is as :
// Declares a stack structure
struct Book
{
	int BNo;
	char BName[20];
	Book *Next;
};	

// Function prototype declaration for add stack, delete stack, and show stack
Book *push(Book *top, int val, char tname[20]); // Add stack
Book *pop(Book *top); // Delete stack
void show_Stack(Book *top); // Show stack
// Main programming logic
void main()
{
	Book *top;
	int tpincode, choice;
	char nm[20];
	char opt = 'Y';		// To continue the do loop in case
	top = NULL;		// Initialization of Stack
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Stack";
		cout << "\n\t2. Deletion from Stack";
		cout << "\n\t3. Traverse of Stack";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					cout << "Enter the Book Number : ";
					cin >> tpincode;
					cout << "Enter Book name : ";
					gets(nm);
					top = push(top, tpincode, nm);
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y'; // Initialize for the second loop
				do
				{
					top = pop(top);
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				show_Stack(top);
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}

// Function body for add stack elements
Book *push(Book *top, int val,char tname[20])
{
	Book *temp;
	temp = new Book;
	temp->BNo = val;
	strcpy(temp->BName,tname);
	temp->Next = NULL;
	if(top ==NULL)
		top = temp;
	else
	{
		 temp->Next = top;
		top = temp;
	}
	return(top);
}
// Function body to delete stack elements
Book *pop(Book *top)
{
	Book *temp;
	int TBNo;
	char TBName[20];
	clrscr();
	if (top == NULL ) {
		cout << "Stack Empty ";
	}
	else 	
	{
		temp = top;
		top = top->Next;
		TBNo = temp->BNo;
		strcpy(TBName, temp->BName);
		temp->Next = NULL;
		cout << "\n\tPopped Book no : " << TBNo;
		cout << "\n\tPopped Book name : " << TBName;
		delete temp;
	}
	return (top);
}
// Function body for show stack elements
void show_Stack(Book *top) {
	Book *temp;
	temp = top;
	clrscr();
	cout << "The values are \n";
	while (temp != NULL) {
		cout << "\n" << temp->BNo << " & " << temp->BName;
		temp = temp->Next;
	}
}

