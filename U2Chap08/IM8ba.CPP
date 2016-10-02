// Filename: \\U2Chap08\IM8ba.CPP
// Function to shift negative and positive numbers.
#include <iostream.h>
#include <conio.h>
void swap(int a[10])
{
	int i = 0, j = 0, t;
	for (i =0; i <10 ; i++)
	{
		j = i + 1;
		if (a[j] <0)
		{
			t = a[j];
			while (j>=0)
			{
				a[j] = a[j-1];
				 j--;
				if (a[j] < 0) break;
			}
			a[j+1] = t;
		}
	}
}
void main()
{
	clrscr();
	int i, ar[10];
	cout << "Enter array elements : ";
	for (i = 0; i < 10; i++)
		cin >> ar[i];
	swap(ar);
	cout << endl;
	for (i=0; i<10; i++)
		cout << ar[i] << endl;
}
