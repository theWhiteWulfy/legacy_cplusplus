// Filename: \\U2Chap09\DL069a.CPP
#include<iostream.h>
#include<conio.h>
#include <stdlib.h>
#include <ctype.h>
struct node
{
	float data;
	node *link;
};
class stack
{
	node *top;
	public:
		stack()
		{
			top = NULL;
		}
		void Push();
		void Pop();
		void Display();
};
// Function body for adds stack elements
void stack::Push()
{
	float val;
	node *temp;
	temp = new node;
	cout << "Enter the value : ";
	cin >> val;
	temp->data = val;
	temp->link = NULL;
	if(top ==NULL)
		top = temp;
	else
	{
		temp->link = top;
		top = temp;
	}
}
// Function body for delete stack elements
void stack::Pop()
{
	node *temp;
	float val;
	if (top == NULL)
	{
		cout << "Stack Empty ";
		val = -1;
	}
	else
	{
		temp = top;
		top = top->link;
		val = temp->data;
		cout << " Deleted element is " << val;
		temp->link = NULL;
		delete temp;
	}
}
// Function body for show stack elements
void stack :: Display()
{
	node *temp;
	temp = top;
	clrscr();
	cout << "The values are \n";
	while (temp != NULL)
	{
		cout << "\n" << temp->data;
		temp = temp->link;
	}
}
// Main programming logic
void main()
{
	int choice;
	stack STACK;
	char opt = 'Y';    // To continue the do loop in case
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
					STACK.Push();
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y'; // Initialize for the second loop
				do
				{
					STACK.Pop();
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				STACK.Display();
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}
