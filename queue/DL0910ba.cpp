// Filename: \\U2Chap10\DL0910ba.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
struct Node  {
	int PId;	//Product Id
	char Pname[20];
	Node *Next;
};

// Function body to add queue elements
Node *QUEINS(Node *rear, int val,char val1[]) {
	Node *temp;
	temp = new Node;
	temp->PId = val;
	strcpy(temp->Pname,val1);
	temp->Next = NULL;
	rear->Next = temp;
	rear = temp;
	return (rear);
}
// Function body to delete queue elements
Node *QUEDEL(Node *front, int val,char val1[]) {
	Node *temp;
	if (front == NULL)
		cout << "Queue Empty ";
	else {
		temp = front;
		front = front->Next;
		val = temp->PId ;
		strcpy(val1,temp->Pname);
		temp->Next = NULL;
		cout << "Deleted data : " << val << " & " << val1;
		delete temp;
	}
	return (front);
}
// Function body to show queue elements
void show_Q(Node *front)
{
	Node *temp;
	temp = front;
	clrscr();
	cout << "The Queue values are";
	cout << "==========================";
	while (temp != NULL)
	{
		cout <<"\n"<< temp->PId << "\t\t" << temp->Pname;
		temp = temp->Next;
	}
	cout << "==========================";
}
// Main programming logic
void main()
{
	Node *front, *rear;
	int val;
	char val1[20];
	int choice;
	char opt = 'Y';	// To continue the do loop in case
	front = rear = NULL;	// Initialization of Queue
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
					cout << "Enter product ID : ";
					cin >> val;
					cout << "Enter product name : ";
					gets(val1);
					rear = QUEINS(rear, val, val1);
					if (front == NULL)
						front = rear;
					cout << "\nDo you want to add more element <Y/N>? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y';	// Initialize for the second loop
				do
				{
					front = QUEDEL(front, val, val1);
					if (front == NULL)
						rear = front;
					cout << "\nDo you want to delete more element <Y/N>? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				show_Q(front);
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}
