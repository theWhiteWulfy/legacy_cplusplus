// Filename: \\U1Chap01\IM1cp.CPP
#include <iostream.h>
#include <conio.h>
// Function to find the sum of series (1) + (1+2) + (1+2+3) + ......+ N
int sumseries(int n)
{
	int i, sum = 0, sum1 = 0;
	for(i = 1; i <= n; i++)
	{
		sum = 0;
		for(int j =0; j<=i; j++)
			sum = sum + j;
		sum1 = sum1 + sum;
	}
	return(sum1);
}
void main()
{
	clrscr();
	int n, nsum = 0;
	cout << "Enter the value of N : ";
	cin >> n;
	nsum = sumseries(n);
	cout << "The sum up to N is : " << nsum;
}