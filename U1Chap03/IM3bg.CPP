// Filename: \\U1Chap03\IM3bg.CPP
//Program to add two objects created in class time and display them
#include<iostream.h>
#include<conio.h>
class CLOCK	//CLASS  DECLARATION
{
	public:
		int hrs, min, sec;
		void show();
		CLOCK()         //CONSTRUCTOR TO INITIALIZE
		{
			hrs = 0;
			min = 0;
			sec = 0;
		}
		CLOCK(int a, int b, int c)   //CONSTRUCTOR TO INITIALIZE
		{                            //  TO FIXED VALUE
			hrs = a;
			min = b;
			sec = c;
		}
};
void CLOCK::show()         //MEMBER FUNCTION TO DISPLAY RESULT
{
	while(min >= 60)
	{
		min-=60;
		hrs+=1;
	}
	while(hrs >= 24)
	{
		hrs-=24;
	}
	cout << " " << hrs << ":" << min;
}
void calc(CLOCK tim1, CLOCK tim2, CLOCK &tim3) //FUNCTION TO CALCULATE SUM
{
	tim3.hrs = tim1.hrs + tim2.hrs;
	tim3.min = tim1.min + tim2.min;
	if (tim3.min >= 60)
	{
		tim3.hrs = tim3.hrs + 1;
		tim3.min = tim3.min - 60;
	}
}
void main()
{
	char ch;
	do
	{
		clrscr();
		cout << "\n\tProgram to Add Two Objects Created in Class CLOCK";
		cout << "and display them ";
		int p=24, q=60, r=60;
		cout << "\n\n\n\t\tEnter the initializing value for object 1 \n\n ";
		while(p >= 24)
		{
			cout << "\n\t\t\t Enter for hours (less than 24) ";
			cin >> p;
		}
		while(q >= 60)
		{
			cout << "\n\t\t\t Enter for minutes (less than 60) ";
			cin >> q;
		}
		while(r >= 60)
		{
			cout << "\n\t\t\t Enter for seconds (less than 60) ";
			cin >> r;
		}
		CLOCK t1(p, q, r);
		p=24, q=60, r=60;
		clrscr();
		cout << "\n\n\n\t\tEnter the initializing value for object 2 \n\n ";
		while(p >= 24)
		{
			cout << "\n\t\t\t Enter for hours (less than 24) ";
			cin >> p;
		}
		while(q >= 60)
		{
			cout << "\n\t\t\t Enter for minutes (less than 60) ";
			cin >> q;
		}
		while(r >= 60)
		{
			cout << "\n\t\t\t Enter for seconds (less than 60) ";
			cin >> r;
		}
		CLOCK t2(p, q, r), t3;    //CREATION OF OBJECTS
		calc(t1, t2, t3);
		cout << "\n\n\n\n\tThe required sum of given times is ";
		t3.show();      //CALLING DISPLAY FUNCTION
		cout << "\n\n\n\n\Do you wish to continue (y/n) ";
		ch = getch();
		}while ((ch == 'y') || (ch == 'Y'));
}
