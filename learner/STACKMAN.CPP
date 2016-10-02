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


void push(int list[], int &top, int n)
{
	if(top==9)
	cout<<"buffer overflow";
	delay(2000);
	else
	list[++top]=n;
}

void pop(int list[], int top)
{
	cout<<"deleted element is ="<<list[top--];
	delay(3000);
}

int is_empty(int top)
{
	if(top==-1)
	return(1);
	else
	return(0);

}

void display(int list[], int top)
{
	int i;
	for(i=top;i>=0;i--)
	cout<<list[i]<<endl;
}


void main()
{
	system("cls");
	int list[10];
	int top=-1;
	int num, opt;

	do
	{
		cout<<"\t\t\toperations on stack\n\n\3 1.\tpush\n\4 2.\tpop\n\5 3.\tdisplay\n\6 4.\texit\n\n\nenter option\n";
		cin>>opt;
		switch(opt)
		{
		case 1:	cout<<"enter value to be entered\n";
			cin>>num;
			push(list, top, num);
			break:
		case 2:	if(is_empty(top))
			cout<<"buffer underflow\n";
			else
			pop(list, top);
			getch();
			break;
		case 3: display(list, top);
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