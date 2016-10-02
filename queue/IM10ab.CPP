// Filename: \\U2Chap10\IM10ab.CPP
// Function body to add queue with array of character type
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
const MAX= 10;
void add_Q(char queue[MAX][MAX], char val[MAX], int &rear)
{
	if (rear == MAX)
	{
		cout << "Queue Full ";
	}
	else
	{
		rear = rear + 1;
		strcpy(queue[rear], val);
	}
}
main()
{
	clrscr();
	char queue[MAX][MAX], val[MAX];
	int front, rear,ch;
	char choice;
	front = rear= -1;
	do
	{
		cout << " 1. For Add \n";
		cout << " 2. For Exit ";
		cin >> ch;
		switch(ch)
		{
			case 1:	cout << "Enter value to be entered in a queue";
				gets(val);
				add_Q(queue,val,rear);
				cout << "Value added in the queue \n";
				for(int i=0;i <=rear;i++)
				puts(queue[i]);
				break;
			case 2:	exit(0);
		}
		cout << "DO U want to continue ";
		cin>>choice;
	}while(choice =='y'||choice=='Y');
	getch();
}