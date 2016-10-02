// Filename: \\U2Chap10\AI1010ba.CPP
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
// Declares a queue structure
struct node {
	char City[20];
	node *link;
};
class queue {
	node *front, *rear;
	public:
		queue() { front = rear = NULL; }
		void add_Q(); // Add queue
		void del_Q(); // Delete queue
		void show_Q(); // Show queue
};
// Function body for add queue elements
void queue::add_Q() {
	node *temp;
	char ct[20];
	temp = new node;
	cout << "Enter City ";
	gets(ct);
	strcpy(temp->City, ct);
	temp->link = NULL;
	rear->link = temp;
	rear = temp;
	if (front == NULL)
		front = rear;
}
// Function body for delete queue elements
void queue::del_Q() {
	node *temp;
	char ct[20];
	if (front == NULL) {
		cout << "Queue Empty ";
	} else {
		temp = front;
		front = front->link;
		strcpy(ct, temp->City);
		temp->link = NULL;
		cout << "Deleted value is "<<ct;
		delete temp;
	}
	if (front == NULL)
		rear = front;
}
// Function body for show queue elements
void queue::show_Q() {
	node *temp;
	temp = front;
	clrscr();
	cout << "The Queue values are";
	while (temp != NULL) {
		cout <<"\n"<< temp->City;
		temp = temp->link;
	}
}
// Main programming logic
void main() {
	node *front, *rear;
	int  choice;
	queue QUEUE;
	char opt = 'Y';		// To continue the do loop in case
	front = rear = NULL;  // Initialization of Queue
	clrscr();
	do {
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Queue";
		cout << "\n\t2. Deletion from Queue";
		cout << "\n\t3. Traverse of Queue";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do {
					QUEUE.add_Q();
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';  // Initialize for the second loop
				do {
					QUEUE.del_Q();
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				QUEUE.show_Q();
				break;
			case 4:
				exit(0);
		}
	} while (choice != 4);
}