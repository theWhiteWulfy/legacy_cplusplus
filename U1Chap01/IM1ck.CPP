// Filename: \\U1Chap01\IM1ck.CPP
// Program to find the armstrong numbers between 1 and 500
#include <iostream.h>
#include <conio.h>
void main()
{
	int i, k, s, d;
	clrscr();
	cout << "The armstrong numbers in between 1 and 500 are : ";
	for (i = 1; i <= 500; i++)
	{
		s = 0;
		k = i;
		while (k != 0)
		{
			d = k % 10;
			s = s + d * d * d;
			k = k / 10;
		}
		if (s == i)
			cout << "\n" << i;
	}
	getch();
}