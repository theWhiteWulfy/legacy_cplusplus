// Filename: \\U2Chap09\CO059ba.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
// Declares a stack structure
struct node
{
	int admno;
	node *link;
};

// Function prototype declaration for add stack, delete stack, and show stack
node *push(node *top, int val); // Add stack
node *pop(node *top, int &val); // Delete stack
void show_Stack(node *top); // Show stack
// Main programming logic
void main()
{
	node *top;
	int val, choice;
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
					cout << "Enter the value to be added in the stack ";
					cin >> val;
					top = push(top, val);
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y'; // Initialize for the second loop
				do
				{
					top = pop(top,val);
					if (val != -1)
						cout << "Value deleted from Stack is " << val;
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
// Function body for adds stack elements
node *push(node *top, int val)
{
	node *temp;
	temp = new node;
	temp->admno = val;
	temp->link = NULL;
	if(top ==NULL)
		top = temp;
	else
	{
		temp->link = top;
		top = temp;
	}
	return(top);
}
// Function body for delete stack elements
node *pop(node *top,int &val)
{
	node *temp;
	clrscr();
	if (top == NULL )
	{
		cout << "Stack Empty ";
		val = -1;
	}
	else
	{
		temp = top;
		top = top->link;
		val = temp->admno;
		temp->link = NULL;
		delete temp;
	}
	return (top);
}
// Function body for show stack elements
void show_Stack(node *top)
{
	node *temp;
	temp = top;
	clrscr();
	cout << "The values are \n";
	while (temp != NULL)
	{
		cout << "\n" << temp->admno;
		temp = temp->link;
	}
}