// Filename: \\U1Chap01\IM1cv.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	char name[10][10];
	float hrwork[10], rate[10], net[10];
	int i, n;
	clrscr();
	cout << "Enter the number of employee : ";
	cin >> n;
	for(i = 0; i< n; i++)
	{
		cout << "Enter the name of the employee : ";
		gets(name[i]);
		cout << "Enter the hour worked by  : ";
		cin >> hrwork[i];
		cout << "Enter pay rate of employee : ";
		cin >> rate[i];
		if (hrwork[i] > 40)
			net[i] = 40 * rate[i] + (hrwork[i] - 40) * rate[i]/2;
		else
			net[i] = hrwork[i] * rate[i];
	}
	for(i = 0; i< n; i++)
	{
		cout << "\nThe name of the employee : ";
		puts(name[i]);
		cout << "\nThe net salary is  : " << net[i];
	}
}