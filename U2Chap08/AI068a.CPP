// Filename: \\U2Chap08\AI068a.CPP
#include<iostream.h>
#include<conio.h>
#include <stdlib.h>
#include <stdio.h>
const int R = 100, C = 100;
void ArrayFormat(int ARR[], int N)
{
	int D2AR[R][C] = {0};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j<=i; j++)
		{
			D2AR[i][j] = ARR[j];
		}
	}
	cout << "If the array is : ... \n";
	for (i = 0; i < N; i++)
	{
		for (int j = 0; j<=i; j++)
		{
			cout << D2AR[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nThe resultant 2D array is given below ...\n";
	for (i = 0; i < N; i++)
	{
		for (int j = 0; j<N; j++)
			cout << D2AR[i][j] << " ";
		cout << endl;
	}
	getch();
}
void main()
{
	clrscr();
	int n, i;
	int AR2D[R];
	// Initializing numbers like, 1, 2, 3 ... into array
	for (i=0; i<100; i++)
		AR2D[i] = i+1;
	cout << "Enter the size of array (Not more than 99) : ";
	cin >> n;
	if (n > 100)
	{
		cout << "Your input size is more than the limit ...";
		getch();
		exit(0);
	}
	ArrayFormat(AR2D, n);
}