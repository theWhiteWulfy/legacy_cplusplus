// Filename: \\U2Chap10\IM10cb.CPP
// This program illustrates the basic operation of circular to add queue, delete queue, 
// and show queue using array. The queue contains data of type character.
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20		// Show maximum array length
char queue[MAX];	// Declares array global variable
int front, rear;	// Declares integer front and read
// Function prototypes to add queue, delete queue and show queue in array implementation
void add_Q(char queue[], int front, char val, int &rear); // Add queue
char del_Q(char queue[], int &front, int rear);	// Delete queue
void show_Q(char queue[], int front, int rear);	// Show queue
void main()
{
	int choice;
	char val;
	char opt = 'Y';		// To continue the do loop in case
	rear = -1;		// Initialization of Queue
	front = -1;
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Queue";
		cout << "\n\t2. Deletion from Queue";
		cout << "\n\t3. Traverse of Queue";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter Your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					cout << "Enter the value to be added in the queue ";
					cin >> val;
					add_Q(queue, front, val, rear);
					cout << "Do you want to add more element <Y/N>? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';	// Initialize for the second loop
				do
				{
					val = del_Q(queue, front, rear);
					if (val != -1)
						cout << "Value deleted from Queue is " << val;
					cout << "\nDo you want to delete more element <Y/N>? ";
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
// Function body to add circular queue with array of character
void add_Q(char queue[], int front, char val, int &rear)
{
	if ((rear + 1) %  MAX == front)
	{
		cout << "Queue Full ";
	}
	else
	{
		rear = (rear + 1) % MAX;
		queue[rear] = val;
	}
}
// Function body to delete circular queue with array of character
char del_Q(char queue[], int &front, int rear)
{
	char value;
	if (front == rear)
	{
		cout << "Queue Empty ";
		value = -1;
	}
	else
	{
		front = (front + 1) % MAX;
		value = queue[front];
	}
	return (value);
}
// Function body to show circular queue with array
void show_Q(char queue[], int front, int rear)
{
	clrscr();
	cout << "The values are ";
	do
	{
		front = (front + 1) % MAX;
		cout << "\n" << queue[front];
	}while(front != rear);
}
