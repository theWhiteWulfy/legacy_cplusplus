// Filename: \\U2Chap10\AI0510ba.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// Declares a queue structure
struct node
{
	char name[20];
	int age;
	node *Link;
};
class queue
{
	node *rear, *front;
	public :
		queue()
		{
			rear = NULL;
			front = NULL;
		};
		void queins();
		void quedel();
		void queshow();
};
// Main programming logic
void main()
{
	int  choice;
	queue QUEUE;
	char opt = 'Y';	// To continue the do loop in case
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Queue";
		cout << "\n\t2. Deletion from Queue";
		cout << "\n\t3. Show Queue";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					QUEUE.queins();
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';  // Initialize for the second loop
				do
				{
					QUEUE.quedel();
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				QUEUE.queshow();
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}
// Function to insert passenger in a queue
void  queue::queins()
{
	node *temp;
	temp = new node;
	cout << "Enter name : ";
	gets(temp->name);
	cout<< "Enter age : ";
	cin >> temp->age;
	temp->Link = NULL;
	if (rear == NULL)
	{
		rear = temp;
		front = rear;
	}
	else
	{
		rear -> Link =temp;
		rear = temp;
	}
}
// Function body for delete queue elements
void  queue::quedel()
{
	node *temp;
	int val;
	char Nm[20];
	if (front == NULL)
	{
		cout << "Queue Empty ";
		val = -1;
	}
	else
	{
		temp = front;
		front = front->Link;
		val = temp->age;
		strcpy(Nm, temp->name);
		temp->Link = NULL;
		cout << " Deleted value is " << val << " & " << Nm;
		delete temp;
	}
	if (front == NULL)
		rear = front;
}
// Function body for show queue elements
void queue::queshow() {
	node *temp;
	temp = front;
	clrscr();
	cout << "The Queue values are";
	cout << "\n====================================";
	while (temp != NULL)
	{
		cout <<"\n"<< temp->name << " & " << temp->age;
		temp = temp->Link;
	}
	cout << "\n====================================";
}