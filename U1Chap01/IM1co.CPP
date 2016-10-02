// Filename: \\U1Chap01\IM1co.CPP
#include <conio.h>
#include <iostream.h>
// Function to find the sum of series 1 + 2 + 3 + ......+ N
int sumseries(int N)
{
	int i, sum = 0;
	for(i = 0; i <= N; i++)
		sum = sum + i;
	return(sum);
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