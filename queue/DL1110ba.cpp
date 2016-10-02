// Filename: \\U2Chap10\DL1110ba.CPP
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
// Declares a queue structure
struct NODE
{
	int Pno;
	char Pname[20];
	NODE *Link;
};
// Declares a queue class
class Queue {
	NODE *Front, *Rear;
	public:
		Queue()
		{ Front = NULL; Rear = NULL;}
		void QueInsert();
		void QueDel();
		void QueDis();
};
void Queue::QueInsert() {
	NODE *Temp=new NODE;
	cout << "Enter passenger no. : ";
	cin>>Temp->Pno;
	cout << "Enter passenger name : ";
	gets(Temp->Pname);
	Temp->Link = NULL;
	if (Front == NULL)
	{
		Front = Rear = Temp;
	}
	else
	{
		Rear->Link = Temp;
		Rear = Temp;
	}
}
// Function body for delete queue elements
void  Queue::QueDel()
{
	NODE *Temp;
	int val;
	char Pn[20];
	if (Front == NULL)
	{
		cout << "Queue Empty ";
		val = -1;
	}
	else
	{
		Temp = Front;
		Front = Front->Link;
		val = Temp->Pno;
		strcpy(Pn, Temp->Pname);
		Temp->Link = NULL;
		cout << " Deleted passenger is : " << val << " & " << Pn;
		delete Temp;
	}
	if (Front == NULL)
		Rear = Front;
}
// Function body for show queue elements
void Queue::QueDis() {
	NODE *Temp;
	Temp = Front;
	clrscr();
	cout << "The Queue values are";
	cout << "\n====================================";
	while (Temp != NULL)
	{
		cout <<"\n"<< Temp->Pno << " & " << Temp->Pname;
		Temp = Temp->Link;
	}
	cout << "\n====================================";
}

// Main programming logic
void main()
{
	int  choice;
	Queue QUEUE;
	char opt = 'Y';	// To continue the do loop in case
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Queue";
		cout << "\n\t2. Deletion from Queue";
		cout << "\n\t3. Traverse of Queue";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\t Enter your choice from above : ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					QUEUE.QueInsert();
					cout << "\nDo you want to add more passenger <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';  // Initialize for the second loop
				do
				{
					QUEUE.QueDel();
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				QUEUE.QueDis();
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}
