// Filename: \\U2Chap10\AI0710ba.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct Customer
{
	int Cno;
	char CName[20];
	Customer *Link;
};
class	QUEUE
{
	Customer *Front,*Rear;
	public:
	QUEUE()
	{
		Front = NULL;
		Rear = NULL;
	}
	void ADD()
	{
		Customer *temp;
		int TCno;
		char TCName[20];
		temp = new Customer;
		cout << "Enter Customet number : ";
		cin >> temp->Cno;
		cout << "Enter customer name : ";
		gets(temp->CName);
		temp->Link = NULL;
		if (Front == NULL)
		{
			Front = Rear = temp;
		}
		else
		{
			Rear->Link = temp;
			Rear = temp;
		}
	}
	void DELETE( )
	{
		Customer *temp;
		int TCno;
		char TCName[20];
		if (Front == NULL)
		{
			cout << "Queue Empty ";
		}
		else
		{
			temp = Front;
			Front = Front->Link;
			TCno = temp->Cno;
			strcpy(TCName, temp->CName);
			cout << "Deleted customer information :" << endl;
			cout << "Customer no. " << TCno << endl;
			cout << "Customer name: " << TCName;
			delete temp;
		}
		if (Front == NULL)
			Rear = Front;
	}
	// Function body for show queue elements
	void SHOW() {
		Customer *temp;
		temp = Front;
		clrscr();
		cout << "The Queue values are";
		cout << "\n====================================";
		while (temp != NULL)
		{
			cout <<"\n"<< temp->Cno << " & " << temp->CName;
			temp = temp->Link;
		}
		cout << "\n====================================";
	}
};
void main()
{
	Customer *Front,*Rear;
	QUEUE Q;
	clrscr();
	int ch;
	char opt = 'Y';	// To continue the do loop in case
	int choice;
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
					Q.ADD();
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