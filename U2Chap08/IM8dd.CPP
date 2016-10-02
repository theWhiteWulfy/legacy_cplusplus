// Filename: \\U2Chap08\IM8dd.CPP
// Program to demonstrate THE SUM OF TWO MATRIX
#include<iostream.h>
#include<conio.h>
main()
{
	int a[3][3], b[3][3], c[3][3];
	int i, j;
	cout << "\n\t Enter elements of Ist array";
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			cin >> a[i][j];
	}
	cout << "\n\t Enter elements of IInd array";
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			cin >> b[i][j];
	}
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			c[i][j] = a[i][j] + b[i][j];
	}
	clrscr();
	cout << "First matrix is \n";
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "Second matrix is\n";
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\nSum of two matrix is \n";
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}