// Filename: \\U1Chap07\IM7bd.CPP
// Program to find the length of the string
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include <stdio.h>
//CLASS DECLARATION
class strn
{
		char *a;
		int i;
		public:
		void read();       //MEMBER FUNCTIONS
		void calculate();
};	//END OF CLASS
void strn::read()
{
	cout << "\n\t";
	cout << "\n\tEnter your name ";
	gets(a);              //TO READ THE STRING
}
void strn::calculate()
{
	i = 0;
	while (*(a+i) != '\0')
	i++;
	cout << "\n\tThe length of your name is : " << i;;
}
//M A I N     P R O G R A M
void main()
{
	strn x;        //DECLARATION OF OBJECT
	clrscr();
	cout<< "\n\n\n\t ";
	x.read();          //CALLING MEMBER FUNCTIONS
	x.calculate();
	getch();
}  //E N D    O F    M A I N
