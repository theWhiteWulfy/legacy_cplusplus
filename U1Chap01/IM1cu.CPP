// Filename: \\U1Chap01\IM1cu.CPP
#include <iostream.h>
#include <conio.h>
//Function to calculate the exponential values
int expo(int power, int base)
{
	int prod = 1, i = 1;
	while(i<=power)
	{
		prod = prod * base;
		i++;
	}
	return(prod);
}
//Function to calculate the sum of series
void series()
{
	int n, x, i = 2, exp;
	float term, sum = 1;
	cout << "\n\tEnter the value of x in the series ";
	cout << "\n\t 1 + x/1 + x^2/2 +.....+ (x^(n-1))/(n-1) ";
	cin >> x;
	cout << "\n\tEnter the value of n in the series ";
	cout << "\n\t 1 + x/1 + x^2/2 +.....+ (x^(n-1))/(n-1) ";
	cin >> n;
	while(i<=n)
	{
		exp = expo((i - 1), x);
		term = float(float(exp)/(i - 1));
		sum = sum + term;
		i++;
	}
	cout << "\n\n\tThe sum is : " << sum;
}
void main()
{
	clrscr();
	series();
}