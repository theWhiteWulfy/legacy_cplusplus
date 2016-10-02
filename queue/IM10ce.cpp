// Filename: \\U2Chap10\IM10ce.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// Declares a queue class
char *msg[ ] = {"over flow", "under flow"};
class Queue
{
	int rear, front;	//the queue pointer
	int que[10];	//the elements
	void error(int e_num) 
	{ 
		cout << msg[e_num]; 
	} //report error message
	public:
		void init() 
		{ 
			rear = front = 0; 
		} //intialize the queue pointer
		void add_queue(int); //put new value in que
		void del_queue( ); //get the front value
};
// Define add_queue outside the class Queue.
void Queue :: add_queue(int x)
{
	if (rear>=10)
	{
		error(0);
	}
	else
	{
		que[rear]=x;
		rear++;
	}
}
// Define del_queue outside the class Queue.
void Queue :: del_queue( )
{
	int x;
	if (front >=10)
	{
		error(1);
	}
	else
	{
		x = que[front];
		front++;
		cout << "Deleted value is : " << x;
	}

}

// Main programming logic
void main()
{
	int choice;
	int x;
	Queue Q;
	char opt = 'Y';	// To continue the do loop in case
	clrscr();
	Q.init();
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
					cout << "Enter first value: ";
					cin >> x;
					Q.add_queue(x);
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';  // Initialize for the second loop
				do
				{
					Q.del_queue();
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
