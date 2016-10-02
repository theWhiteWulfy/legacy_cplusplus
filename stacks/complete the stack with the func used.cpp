// Filename: \\U2Chap09\AI069a.CPP
#include<iostream.h>
#include<conio.h>
class stack
{
	int data[10];
	int top;
	public:
	stack() { top=-1;}
	void push();	// to push into the stack
	void pop();	// to pop an element from the stack
	void Delete(int ITEM); // To delete all elements which are equal to ITEM
};
// To push into the stack
void stack::push()
{
	int x;
	if (top>=9)
	cout <<" Stack Full ";
	else
	{
		cout << "Enter the element to push ";
		cin >>x;
		top++;
		data[top] = x;
	}
}
// To pop an element from the stack
void stack::pop()
{
	int x;
	if (top < 0)
	cout << "Stack Empty ";
	else
	{
		x = data[top];
		top--;
		cout << "\nDeleted value is "<<x;
	}
}
void main()
{
	stack S;
	char ch='y';
	int ans;
	clrscr();

	while ( ch == 'y')
	{
		cout << " 1. For push ";
		cout << " \n2. For pop";
		cout << "\n Enter your choice ";
		cin >> ans;
		switch(ans)
		{
			case 1 : S.push();
				 break;
			case 2 : S.pop();
				 break;
		}
		cout << "\nDo U want to continue ";
		cin >>ch;
	}
}
