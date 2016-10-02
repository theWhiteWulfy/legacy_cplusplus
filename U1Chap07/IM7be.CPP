// Filename: \\U1Chap07\IM7be.CPP
// Program to find the occurrence of character in the string
#include<iostream.h>
#include<string.h>
#include<conio.h>
# include <stdio.h>
//CLASS DECLARATION
class strn
{
	char *a;
	char ch;
	int i;
	public:
		void read();       //MEMBER FUNCTIONS
		void find();
};	//END OF CLASS
void strn::read()
{
	cout << "\n\t";
	cout << "\n\tEnter the first string ";
	gets(a);              //TO READ THE STRING
}
void strn::find()
{
	i = 0;
	int count = 0;
	cout << "\n\t Enter the character ";
	cin >> ch;
	while (*(a+i) != '\0')
	{
		if (*(a + i) == ch)
			count++;
		i++;
	}
	cout << "\n\tThe number of times "<< ch << " occur in " << a << " is " << count;
}
//M A I N     P R O G R A M
void main()
{
	strn x;        //DECLARATION OF OBJECT
	clrscr();
	cout << "\n\n\n\t ";
	x.read();          //CALLING MEMBER FUNCTIONS
	x.find();
	getch();
}  //E N D    O F    M A I N
