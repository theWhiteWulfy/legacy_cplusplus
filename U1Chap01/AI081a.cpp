// Filename: \\U1Chap01\AI081a.CPP
#include<iostream.h>
#include<ctype.h>
void main()
{
	char Mystring[]="What@OUTPUT!";
	for(int I=0;Mystring[I]!='\0';I++)
	{
		if (!isalpha(Mystring[I]))
			Mystring[I]='*';
		else if (isupper(Mystring[I]))
			Mystring[I] = Mystring[I]+1;
		else
			Mystring[I]=Mystring[I+1];
	}
	cout<<Mystring;
}