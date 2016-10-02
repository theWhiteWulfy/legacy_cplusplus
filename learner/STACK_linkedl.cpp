#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
	int data;
	node *ptr;
};
void push(node *&top)
{
	node *t;
	t = new node;
	cout<<"enter number: ";
	cin>>t->data;
	t->ptr = top;
	top = t;
}
void pop(node *&top)
{
	cout<<"Deleted Element is: "<<top->data;
	node *t;
	t = top;
	top = top->ptr;
	delete t;
}
int isempty(node *top)
{
	if(top == NULL)
		return 1;
	else
		return 0;
}
void display( node *top)
{
	node *t;
	t = top;
	while(t != NULL)
	{
		cout<<t->data<<'\n';
		t = t->ptr;
	}
}
void main()
{

	node *top;
	top = NULL;
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
		case 1: push(top);
			break;
		case 2: if(isempty(top) == 1)
				cout<<"U/F";
			else
				pop(top);
			getch();
			break;
		case 3: display(top);
			getch();
			break;
	}
	if(opt < 4 )
		goto start;
}