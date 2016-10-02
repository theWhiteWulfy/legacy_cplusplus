#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
void insertion (int q[], int &f, int&r)
{
	if((f==0 && r==7) || (r+1==f))
		cout<<"Over Flow\n";
	else
	{
		int num;
		cout<<"Enter element to be inserted\n";
		cin>>num;
		if(f==-1)
			f=r=0;
		else if(r==7)
			r=0;
		else
			r=r+1;
		q[r]=num;
	}

}
void deletion(int q[], int &f, int &r)
{
	cout<<"The deleted element is : "<<q[f];
	if(f==r)
		f=r=-1;
	else
		f=f+1;
}
int isempty (int f)
{
	if(f==-1)
		return 1;
	else
		return 0;
}
void display(int q[],int f,int r)
{
	int i;
	if(f<r)
		for(i=f; i<r ;i++)
			cout<<setw(5)<<q[i];
	else
		for(i=f; i<=7; i++)
			cout<<setw(5)<<q[i];
		for(i=0 ;i<=r; i++)
			cout<<setw(5)<<q[i];
}
void main()
{
	int f,r;
	f=r=-1;
	int q[8];
	int opt;
	start:
	clrscr();
	cout<<"C I R C U L A R   Q U E U E   O P E R A T I O N S\n";
	cout<<"1. Insertion\n";
	cout<<"2. Deletion\n";
	cout<<"3. Display\n";
	cout<<"4. Exit\n";
	cout<<"Enter your option: ";
	cin>>opt;
	switch(opt)
	{	case 1: insertion(q,f,r);
			break;
		case 2: if(isempty(f)==1)
				cout<<"Under flow\n";
			else
				deletion(q,f,r);
			getch();
			break;
		case 3: display(q,f,r);
			getch();
	}
	if(opt<4)
		goto start;
}