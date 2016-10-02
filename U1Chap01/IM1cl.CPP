// Filename: \\U1Chap01\IM1cl.CPP
// Program to find the prime numbers in between n
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, i, flag;
	clrscr();
	cout << "\n\t\t Enter any  number => ";
	cin >> n;
	if (n < 5)
	{
		cout << "Your input is less than 5";
		getch();
		return;
	}
	i = 2;
	int j = 2;
	while (j < n-1)
	{
		flag = 0;
		i = 2;
		while (i<j)
		{
			if(j%i == 0)
			{
				flag = 1;
				break;
			}
			i++;
		}
		if(flag == 0)
			cout<<"The number is " << j << endl;
		j++;
	}
}