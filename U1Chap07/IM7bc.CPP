// Filename: \\U1Chap07\IM7bc.CPP
// Program to check whether the two strings are equal or not
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include <stdio.h>
//CLASS DECLARATION
class strn
{
	char *a, *b, flag;
	int i, j, k;
	public:
		void read();       //MEMBER FUNCTIONS
		void compare();
		strn()               //USE OF CONSTRUCTOR
		{
			flag = 'y';
		}
};	//END OF CLASS
void strn::read()
{
	cout << "\n\t";
	cout << "\n\tEnter the first string ";
	gets(a);              //TO READ THE STRING
	cout << "\n\tEnter the second string ";
	gets(b);              //TO READ THE STRING
}
void strn::compare()
{
	i = 0;
	j = 0;
	while (*(a+i) != '\0')
		i++;
	while(*(b+j) != '\0')
		j++;
	if (i != j)
	{
		cout << "\n\t Strings are not equal ";
		return;
	}
	i = 0;
	while ((*(a+i) != '\0') && (*(b+i) != '\0'))
	{
		if(*(a + i) != *( b + i))
		{
			flag = 'n';
			break;
		}
		i++;
	}
	if(flag == 'n')
		cout << "\n\tStrings are not equal ";
	else
		cout << "\n\tStrings are equal ";
}
//M A I N     P R O G R A M
void main()
{
	strn x;        //DECLARATION OF OBJECT
	clrscr();
	cout << "\n\n\n\t ";
	x.read();          //CALLING MEMBER FUNCTIONS
	x.compare();
	cout << "\n\n\t\t bye!";
	getch();
} //E N D    O F    M A I N