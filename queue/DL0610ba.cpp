// Filename: \\U2Chap10\DL0610ba.CPP
#include<iostream.h>
#include<conio.h>
#include <stdlib.h>
class queue
{
	int data[10];
	int front, rear;
	public:
		queue()
		{
			front = -1;
			rear = -1;
		}
		void add(); // To add an element into the queue
		void remove(); // To remove an element from the wueue
};
void queue::add()
{
	if (rear == front)
	{
		if (rear == -1)
			front = rear  = 0;
		else
			rear = (rear + 1) % 10;
		cout << "Enter data : ";
		cin >> data[rear];
	}
	else
		cout << "Queue full :: Overflow error!!\n";
}
void queue::remove()
{
	if (front != -1)
	{
		cout << data[front] << " deleted ";
		if (front == rear)
			front = rear - 1;
		else
			front = (front - 1) % 10;
	}
	else
		cout << "Queue empty ! Underflow error!!\n";
}
void main()
{
	clrscr();
	queue Q;
	Q.add();
	Q.remove();
}

