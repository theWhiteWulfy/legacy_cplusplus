// Filename: \\U1Chap01\IM1cj.CPP
// Program to reverse an integer
#include <iostream.h>
#include <conio.h>
void main()
{
	int num, X[6], d1, d2, q, q1, r, i, j;
	clrscr();
	cout << "Enter any integer ";
	cin >> num;
	if (num > 32766)
	{
		cout << "You entered a number which is not valid integer";
		getch();
		return;
	}
	// reversing the integer
	i = 0;
	q = q1 = num;
	num = 0;
	while (q != 0)
	{
		r = q % 10;	// Find the reminder
		q = q / 10;	// Number will divided by 10 and find the quotient
		num = num * 10 + r;
	}
	// Assigns the value i into j
	cout << "The original number is "<< q1;
	cout << "\nThe reversed number is "<< num;
	getch();
}
