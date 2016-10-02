// Filename: \\U1Chap01\IM1cm.CPP
// Program to convert an integer number into its equivalent binary
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// Function to convert an integer number into binary number
void integer_to_binary(int num)
{
	long binary = 0;
	int decimal, X[10], d1, d2, q, r;
	// Convert the number into decimal
	d1 = num;
	int i = 0;
	while (d1 >= 2)
	{
		q = d1 / 2;
		r = d1 % 2;
		X[i] = r;
		d1 = q;
		if (d1 < 2)
		{
			i++;
			X[i] = d1;
		}
		else
			i++;
	}
	int j = i;
	for (i = j; i >= 0; i--)
	{
		cout << X[i];
	}
}
main()
{
	int num;
	clrscr();
	cout << "Enter any integer number ";
	cin >> num;
	integer_to_binary(num);
	return 0;
}