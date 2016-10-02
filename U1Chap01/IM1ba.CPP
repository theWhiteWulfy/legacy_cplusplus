// Filename: \\U1Chap01\IM1ba.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	int no, per;
	clrscr();
	cout << "Enter a number <0 - To Exit> : ";
	cin >> no;
	per = no;
	while (no != 0)
	{
		cout << "\nEnter a number : ";
		cin >> no;
		if (no > per)
			cout << " \nThe new number is greater than the previous";
		else
		if (no < per)
			cout << " \nThe new number is less than the previous";
		else
			cout << " \nThe new number is equal to the previous";
		per = no;
	}
}