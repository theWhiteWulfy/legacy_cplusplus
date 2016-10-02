#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iomanip.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>

class stack
{
	int list[10];
	int top;
	public:
	stack()
	{
		top=-1;
	}
	void push(int);
	void pop();
	int is_empty();
	void display();
};

void stack::push(int n)
{
	if(top==9)
	cout<<"buffer overflow exiting ";
	else
	list[++top]=n;
}

void stack::pop()
{
	cout<<"deleted element is ="<<list[top--];

}

int stack::is_empty()
{
	if(top==-1)
	return(1);
	else
	return(0);

}

void stack::display()
{
	int i;
	for(i=top;i>=0;i--)
	cout<<list[i]<<endl;
}


void main()
{
	system("cls");
	int num, opt;
	stack obj;
	do
	{
		cout<<"\t\t\toperations on stack \n\n\3 1.\tpush\n\4 2.\tpop\n\5 3.\tdisplay\n\6 4.\texit\n\n\nenter option\n";
		cin>>opt;
		switch(opt)
		{
		case 1:	cout<<"enter value to be added \n";
			cin>>num;
			obj.push(num);
			break;
		case 2:	if(obj.is_empty())
			cout<<"buffer underflow\n";
			else
			obj.pop();
			getch();
			break;
		case 3: obj.display();
			getch();
			clrscr;
		case 4:cout<<"press any key to exit";
				break;
		default: cout<<"wrong choice press any key to return to main menu";
		}
		}while(opt!=4);
		getch();
		exit(0);
}