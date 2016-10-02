// Filename: \\U2Chap08\DL078ca.CPP
#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
const int MAX=100;
// Function to rearrange the content of the array
void Replace(int x[], int i)
{
	for (int k=0; k<i; k++)
	{
		if (x[k] % 2 == 0)
			x[k] = x[k] * 2;
		else
			x[k] = x[k] * 3;
	}
	cout << "The contents of rearranged array is \n";
	for(k=0; k<i; k++)
		cout << x[k] << " ";
}
void main()
{
	clrscr();
	int x[MAX], N;
	cout << "Enter total array elements: ";
	cin >> N;
	cout << "Enter array elements:";
	for(int j=0; j<N; j++)
		cin >> x[j];
	Replace(x, N);
}