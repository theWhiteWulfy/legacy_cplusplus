#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void insertion(int q[], int &f,int &r,int num)
{
	if ( f==0 && r==7 )
	    {	cout<<"over flow\n";
		getch(); }
	else
	{
		if (f==-1)
			f=r=0;
		else if (r!=7)
			r++;
		else
			for (int i=f; i<=r; i++)
				q[i-1]=q[i];
		q[r]=num;
	}
}
void deletion(int q[], int &f, int &r)
{
	cout<<"the deleted element is "<<q[f];
	if (f==r)
		f=r=-1;
	else
		f++;
}
int isempty(int f)
{
	if (f==-1)
		return 1;
	else
		return 0;
}
void display(int q[], int f, int r)
{
	for(int i=f; i<=r; i++)
		cout<<setw(5)<<q[i];
}
void main()
{
	int q[8],opt,num,f,r;
	f=r=-1;
	start:
	clrscr();
	cout<<setw(10)<<"Q U E U E  O P E R A T I O N S\n\n";
	cout<<"1. Inserion\n";
	cout<<"2. Deletion\n";
	cout<<"3. Display\n";
	cout<<"4. Exit\n";
	cout<<"Enter your option\n";
	cin>>opt;
	switch(opt)
	{
		case 1: cout<<"enter the number to be inserted";
			cin>>num;
			insertion(q,f,r,num);
			break;
		case 2: if(isempty(f)==1)
				cout<<"under flow";
			else
				deletion(q,f,r);
			getch();
			break;
		case 3: display(q,f,r);
			getch();
			break;
	}
	if(opt<4)
		goto start;
}