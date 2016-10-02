// Filename: \\U1Chap03\IM3bd.CPP
// This program accepts a string, reverse it, copy the string to another location
// and concatenate two strings
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
//Class declaration
class strn
{
	char a[20], flag;
	int i, j, k;
	public:
		void read();       //MEMBER FUNCTIONS
		void rev(strn &obj2);
		void copy(strn &obj2);
		void merge(strn &obj2);
		void display();
		strn()               //USE OF CONSTRUCTOR
		{
			flag = 'y';
		}
};
//End of class
void strn::read()
{
	gets(a);              //TO READ THE STRING
}
void strn::rev(strn &obj2)
{
	int l = strlen(a);
	int j = 0;
	for(i=l-1; i>=0; i--)
	{
		obj2.a[j] = a[i];
		j++;
	}
	obj2.a[j] = '\0';
	getch();
}
void strn::copy(strn &obj2)
{
	cout << "\n\tThe entered string ";
	puts(a);
	for(i=0; a[i]!='\0'; i++)
		obj2.a[i] = a[i];
	obj2.a[i] = '\0';
}
void strn::merge(strn &obj2)
{
	char c[40];
	cout << "\n\t";
	for(i=0; a[i]!='\0'; i++)      //COPY FIRST STRING INTO THE FINAL STRING
		c[i] = a[i];
	int k = i;
	for( i=0; obj2.a[i]!='\0'; i++)    // COPY THE SECOND STRING INTO THE FINAL STRING
	{
		c[k] = obj2.a[i];
		k++;
	}
	c[k] = '\0';
	cout << "\n\tConcatenated String is ";
	for(i=0; c[i]!='\0'; i++)
	cout << c[i];
}
void strn::display()
{
	puts(a);
}
//M A I N  P R O G R A M
void main()
{
	strn x, y;        //DECLARATION OF OBJECT
	clrscr();
	cout << "\n\n\n\t ";
	cout << "This program is meant to accept a string ,reverse ";
	cout << "it, check if it\n\t  is palindrome or not and then display ";
	cout << "it in alphabetical order \n\n\t";
	cout << "\n\n\n\tPress any key to continue....";
	getch();
	clrscr();
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	x.read();          //CALLING MEMBER FUNCTIONS
	cout << "\tEntered string is ";
	x.display();
	x.rev(y);
	cout << "\tThe reversed string is ";
	y.display();
	x.copy(y);
	cout <<  "\tThe copied string is : ";
	y.display();
	cout << "\t Enter the string for concatenation : ";
	y.read();
	x.merge(y);
	cout << "\n\n\t\t bye!";
	getch();
} 
