// Filename: \\U2Chap09\DL059a.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
// Declares a stack structure
struct Node
{
	int X, Y;
	Node *Link;
};
class STACK
{
	Node *Top;
	public :
		STACK() {Top=NULL;}
		void PUSH();
		void POP();
		~STACK()
		{
			cout << "Value destroyed";
		}
};
// Function body for adds stack elements
void STACK::PUSH()
{
	Node *Temp;
	Temp = new Node;
	cin >> Temp->X;
	cin >> Temp->Y;
	Temp->Link = Top;
	Top = Temp;
}
// Function body for delete stack elements
void STACK::POP()
{
	Node *temp;
	int val;
	if (Top == NULL)
	{
		cout << "Stack Empty ";
	}
	else
	{
		temp = Top;
		Top = Top->Link;
		temp->Link = NULL;
		delete temp;
	}
}
// Main programming logic
void main()
{

	int  choice;
	STACK stack;
	char opt = 'Y';		// To continue the do loop in case
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Stack";
		cout << "\n\t2. Deletion from Stack";
		cout << "\n\t3. Exit from Menu";
		cout << "\n\nEnter your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					stack.PUSH();
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y'; // Initialize for the second loop
				do
				{
					stack.POP();
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				exit(0);
		}
	}
	while (choice != 4);
}
