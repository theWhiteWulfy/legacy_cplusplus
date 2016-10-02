// Filename: \\U1Chap07\IM7ba.CPP
// Program to check whether the string is palindrome or not
#include<iostream.h>
#include<string.h>
#include<conio.h>
//CLASS DECLARATION
class strn
{
		char *a, flag;
		int i, j, k;
		public:
		void read();       //MEMBER FUNCTIONS
		void ch_pal();
		strn()               	//USE OF CONSTRUCTOR
		{
			flag = 'y';
		}
};
//END OF CLASS
void strn::read()
{
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	cin >> a;              //TO READ THE STRING
}
void strn::ch_pal()
{
	cout << "\n\tThe entered string ";
	for(i=0; *(a+i)!='\0'; i++)
		cout << *(a+i);
	for(j=0, i-=1; i>j; j++, i--)
	{
		if(*(a + i) != *(a+j))       //CHECKING FOR PALINDROME
		{
			flag = 'n';
			break;
		}
	}
	if(flag == 'n')
		cout << " is not a palindrome ";
	else
		cout << " is a palindrome ";
}
void main()
{
	strn x;        //DECLARATION OF OBJECT
	clrscr();
	cout << "\n\n\n\t ";
	x.read();          //CALLING MEMBER FUNCTIONS
	x.ch_pal();
	cout << "\n\n\t\t bye!";
	getch();
}
