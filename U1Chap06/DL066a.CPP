// Filename: \\U1Chap06\DL066a.CPP
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include <ctype.h>
// Function to count the number of words.
void calculate()
{
	fstream tfile;
	clrscr();
	tfile.open("PARA.TXT", ios::in);
	char arr[80];
	char ch;
	int i=0, sum=0, n=0;
	while(tfile)
	{
		tfile.get(ch);
		arr[i] = ch;
		i++;
		if (ch == ' ')
		{
			i--;
			sum = sum + i;
			i = 0;
			n++;
		}
	}
	cout << "Total no. of words : " << n;
}
void main()
{
	clrscr();
	calculate();
}