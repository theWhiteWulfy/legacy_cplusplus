#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
	int num;
	node *ptr;
};
void insertion (node * &f, node * &r, int num)
{
	node *t;
	t= new node;
	t->num = num;
	t->ptr = NULL;
	if(f==NULL)
		f=r=t;
	else
	{	r->ptr = t;
		r=t;
	}
}
void deletion(node * &f,node * &r)
{
	node *t;
	cout<<"The deleted element is : "<<f->num;
	t=f;
	f=f->ptr;
	delete t;
	if(f==NULL)
		f=r;
}
int isempty (node *f)
{
	if(f==NULL)
		return 1;
	else
		return 0;
}
void display(node *f)
{
	node *t;
	t=f;
	while(t!=NULL)
	{
		cout<<t->num<<"  ";
		t=t->ptr;
	}
}
void main()
{
	node *f;
	node *r;
	f=r=NULL;
	int num,opt;
	start:
	clrscr();
	cout<<"Q U E U E   O P E R A T I O N S\n";
	cout<<"1. Insertion\n";
	cout<<"2. Deletion\n";
	cout<<"3. Display\n";
	cout<<"4. Exit\n";
	cout<<"Enter your option: ";
	cin>>opt;
	switch(opt)
	{	case 1: cout<<"Enter element to be inserted: ";
			cin>>num;
			insertion(f,r,num);
			break;
		case 2: if(isempty(f)==1)
				cout<<"Under flow\n";
			else
				deletion(f,r);
			getch();
			break;
		case 3: display(f);
			getch();
	}
	if(opt<4)
		goto start;
}