#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stack
{
	int A[6];
	int top;
	public:
	stack()
	{
		top = -1;
	}
	void push();
	void pop();
	int isempty();
	void display();
};
void stack::push()
{
	if(top == 6)
		cout<<"O/F";
	else
	{	top++;
		cout<<"enter number: ";
		cin>>A[top];
	}
}
void stack::pop()
{
	cout<<"Deleted Element is: "<<A[top];
	top--;
}
int stack::isempty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}
void stack::display()
{
	for(int i = top; i>=0; i--)
		cout<<A[i]<<'\n';
}
void main()
{

	stack obj;
	int opt;
	start:
	clrscr();
	cout<<" 1. PUSH \n";
	cout<<" 2. POP \n";
	cout<<" 3. DISPLAY \n";
	cout<<" 4. EXIT \n";
	cin>>opt;
	switch(opt)
	{
		case 1: obj.push();
			break;
		case 2: if(obj.isempty() == 1)
				cout<<"U/F";
			else
				obj.pop();
			getch();
			break;
		case 3: obj.display();
			getch();
			break;
	}
	if(opt < 4 )
		goto start;
}