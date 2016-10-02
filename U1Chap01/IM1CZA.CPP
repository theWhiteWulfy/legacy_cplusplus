// Filename: \\U1Chap01\IM1cza.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	int i, j;
	char ch = 'A', ch1;
	int row = 5;
	int col = 30;
	int col1 = 30;
	clrscr();
	i = 0;
	while (i<=3)
	{
		j = 0;
		col = 30;
		col1 = 30;
		ch1 = ch;
		while (j <= i)
		{
			gotoxy(col, row);
			cout << ch1;
			gotoxy(col1, row);
			cout << ch1;
			j++;
			col++;
			col1--;
			ch1--;
		}
		i++;
		ch++;
		row++;
	}
	row = 11;
	i = 0;
	ch = 'A';
	while (i<=3)
	{
		j = 0;
		col = 30;
		col1 = 30;
		ch1 = ch;
		while (j <= i)
		{
			gotoxy(col, row);
			cout << ch1;
			gotoxy(col1, row);
			cout << ch1;
			j++;
			col++;
			col1--;
			ch1--;
		}
		i++;
		ch++;
		row--;
	}
}	