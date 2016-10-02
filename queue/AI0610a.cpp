// Filename: \\U2Chap10\AI0610a.CPP
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
		cout << "\n\t3. Exit from Menu";
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
				exit(0);
		}
	}
	while (choice != 3);
}
// Function to insert passenger in a queue
void  queue::queins()
{
	node *temp;
	temp = new node;
	cout << "Enter student name : ";
	gets(temp->name);
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
	char nm[20];
	int val;
	if (front == NULL)
	{
		cout << "Queue Empty ";
		val = -1;
	}
	else
	{
		temp = front;
		front = front->Link;
		strcpy(nm, temp->name);
		temp->Link = NULL;
		cout << " Deleted name is " << nm;
		delete temp;
	}
	if (front == NULL)
		rear = front;
}
