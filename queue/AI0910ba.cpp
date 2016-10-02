// Filename: \\U2Chap10\AI0910ba.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
struct Node {
	int Itemno;	
	char Itemname[20];
	Node *Link;
};
// Function body to delete queue elements
Node *QUEDEL(Node *front, int val,char val1[])
{
	Node *temp;
	if (front == NULL)
		cout << "Queue Empty ";
	else {
		temp = front;
		front = front->Link;
		val = temp->Itemno ;
		strcpy(val1,temp->Itemname);
		temp->Link = NULL;
		cout << "Deleted data : " << val << " & " << val1;
		delete temp;

	}
	return (front);
}
// Function body to add queue elements
Node *QUEADD(Node *rear, int val, char val1[])
{	
	Node *temp;
	temp = new Node;
	temp->Itemno = val;
	strcpy(temp->Itemname, val1);
	temp->Link = NULL;
	rear->Link = temp;
	rear = temp;
	return (rear);
}
// Function body to show queue elements
void show_Q(Node *front)
{
	Node *temp;
	temp = front;
	clrscr();
	cout << "The Queue values are";
	cout << "\n==========================";
	while (temp != NULL)
	{
		cout <<"\n"<< temp->Itemno << " & " << temp->Itemname;
		temp = temp->Link;
	}
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
					cout << "Enter item no. : ";
					cin >> val;
					cout << "Enter item name : ";
					gets(val1);
					rear = QUEADD(rear, val, val1);
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
