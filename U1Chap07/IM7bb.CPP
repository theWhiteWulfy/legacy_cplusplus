// Filename: \\U1Chap07\IM7bb.CPP
// Program to reverse the string using pointer
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include <stdio.h>
class strn
{
	char *str, flag;
	int i, j, l;
	public:
		void read();       //MEMBER FUNCTIONS
		void rev();
		strn()               //USE OF CONSTRUCTOR
		{
			flag = 'y';
		}
};
void strn::read()
{
	cout << "\n\tEnter the string ";
	gets(str);              //TO READ THE STRING
}
void strn::rev()
{
	l = strlen(str),j = l-1;
	char t;
	for(i=0; i<=j; i++, j--)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
	cout << " The reversed string is " << str;
}
void main()
{
	strn x;        //DECLARATION OF OBJECT
	x.read();          //CALLING MEMBER FUNCTIONS
	x.rev();
}

