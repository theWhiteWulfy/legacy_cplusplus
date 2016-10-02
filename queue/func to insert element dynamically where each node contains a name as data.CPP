// Filename: \\U2Chap10\DL0810ba.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct THENODE
{
	char Name[20];
	THENODE *Link;
};
class	queue
{
	THENODE *front,*rear;
	public:
	queue()
	{
		front = NULL;
		rear = NULL;
	}
	void  queue::queins()
	{
		THENODE  *temp;
		temp = new THENODE;
		cout<< "Enter the name : ";
		gets(temp->Name);
		temp->Link = NULL;
		if (rear ==NULL)
		{
			rear = temp;
			front = rear;
		}
		else
		{
			rear ->Link=temp;
			rear = temp;
		}
	}
	void queue::DELETE( )
	{
		THENODE *temp;
		char TCName[20];
		if (front == NULL)
		{
			cout << "Queue Empty ";
		}
		else
		{
			temp = front;
			front = front->Link;
			strcpy(TCName, temp->Name);
			cout << "Deleted Customer information : " << TCName;
			delete temp;
		}
		if (front == NULL)
			rear = front;
	}
	// Function body for show queue elements
	void SHOW() {
		THENODE *temp;
		temp = front;
		clrscr();
		cout << "The Queue values are ...";
		cout << "\n====================================";
		while (temp != NULL)
		{
			cout <<"\n" << temp->Name;
			temp = temp->Link;
		}
		cout << "\n====================================";
	}
};
void main()
{
	queue Q;
	clrscr();
	int ch;
	int choice;
	char opt = 'Y';	// To continue the do loop in case
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t\t 1. For Add ";
		cout << "\n\t\t 2. For delete ";
		cout << "\n\t\t 3. Traverse of Queue";
		cout << "\n\t\t 4. Exit from Menu";
		cout << "\n\n\t\t Enter your choice from above : ";
		cin >> ch;
		switch(ch)
		{
			case 1: 
				do
				{
					Q.queins();
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';  // Initialize for the second loop
				do
				{
					Q.DELETE();
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				Q.SHOW();
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
	getch();
}
