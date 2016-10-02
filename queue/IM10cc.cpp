// Filename: \\U2Chap10\IM10cc.CPP		
// This program illustrates the basic operation of add queue, delete queue,
// and show queue using array. The queue contains data of type integer.
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100	 // Shows maximum array length
int queue[MAX];	// Declares array global variable
int front, rear;	// Declares integer front and rear
// Function prototypes of add queue, delete queue, and show queue in array 					implementation
void add_Q(int queue[], int val, int &rear);   // Add queue
int del_Q(int queue[], int &front, int rear);    // Delete queue
void show_Q(int queue[], int front, int rear);  // Show queue
void main()
{
	int choice, val;
	char opt = 'Y';	// To continue the do loop in case
	rear = -1;	// Initialization of Queue
	front = -1;
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Queue";
		cout << "\n\t2. Deletion from Queue";
		cout << "\n\t3. Traverse the Queue";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					cout << "Enter the value to be added in the queue ";
					cin >> val;
					add_Q(queue, val, rear);
					cout << "Do you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';   // Initialize for the second loop
				do
				{
					val = del_Q(queue, front, rear);
					if (val != -1)
						cout << "Value deleted from Queue is " << val;
					cout << "\nDo you want to delete more elements <Y/N> ? " ;
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				show_Q(queue, front, rear);
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}
// Function body for add queue with array
void add_Q(int queue[], int val, int &rear)
{
	if (rear == MAX)
	{
		cout << "Queue Full ";
	}
	else
	{
		rear = rear + 1;
		queue[rear] = val;
	}
}
// Function body for delete queue with array
int del_Q(int queue[], int &front, int rear)
{
	int value;
	if (front == rear)
	{
		cout << "Queue Empty ";
		value = -1;
	}
	else
	{
		front = front + 1;
		value = queue[front];
	}
	return (value);
}
// Function body for show queue with array
void show_Q(int queue[], int front, int rear)
{
	clrscr();
	if (front == rear)
	{
		cout << "Queue Empty";
		return;
	}
	cout << "The values are ";
	do
	{
		front = front + 1;
		cout << "\n" << queue[front];
	}while (front != rear);
}