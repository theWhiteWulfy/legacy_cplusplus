// Filename: \\U1Chap01\IM1ct.CPP
#include <iostream.h>
#include <conio.h>
// Function to calculate the exponential values
int expo(int power, int base)
{
	int prod = 1, i = 1;
	while (i<=power)
	{
		prod = prod * base;
		i++;
	}
	return(prod);
}
void s3()
{
	int n, a, r, i = 1, exp;
	float term, sum = 0;
	cout << "\n\tEnter the value of n in the series ";
	cout << "\n\t a + ar + ar^2 +...+ ar^(n-1) ";
	cin >> n;
	cout << "\n\tEnter the value of a in the series ";
	cout << "\n\t a + ar + ar^2 +...+ ar^(n-1) ";
	cin >> a;
	cout << "\n\tEnter the value of r in the series ";
	cout << "\n\t a + ar + ar^2 +...+ ar^(n-1) ";
	cin >> r;
	while(i<=n)
	{
		exp = expo((i - 1), r);
		term = float(a * exp);
		sum = sum + term;
		i++;
	}
	cout << "\n\n\tThe sum is " << sum;
}
void main()
{
	clrscr();
	s3();
}