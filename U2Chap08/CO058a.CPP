// Filename: \\U2Chap08\CO058a.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include<iomanip.h>
#include<string.h>
// Function to arrange 10 elements using selection sort
void SelectionSort()
{
	int range[10], loc, lowest, T, N, i, j, x;
	N = 10;
	cout << "Enter the array elements : \n";
	for (i = 0; i < N; i++)
	{
		cout << "Location " << i + 1 << ". Value :  ";
		cin >> range[i];
	}
	for (i = 0; i < N - 1; i++)
	{
		lowest = range[i];
		loc = i;
		for (j = i + 1; j < N; j++)
		{
			if (lowest > range[j])
			{
				loc = j;
				lowest = range[j];
			}
		}
		T = range[i];
		range[i] = range[loc];
		range[loc] = T;
	}
	cout << "\nThe sorted list is ... \n";
	for (i = 0; i < N; i++)
		cout << range[i] << endl;
}
void main()
{
	clrscr();
	SelectionSort();
}
