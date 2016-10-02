// Filename: \\U1Chap01\IM1bb.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	int no,r;
	int row = 5;
	int col = 30;
	clrscr();
	cout << "Enter a number : ";
	cin >> no;
	while ( no != 0)
	{
		r = no % 10;
		no = no / 10;
		gotoxy(col,row);
		cout << r;
		col = col -3;
	}
}