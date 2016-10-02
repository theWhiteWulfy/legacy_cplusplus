// Filename: \\U1Chap01\IM1cs.CPP
#include <iostream.h>
#include <conio.h>
// Function to calculate the series
// 1 + 1/2! + 1/3! + 1/4! +...+ 1/n!
//Function to calculate the factorial
int fact(int num)
{
	int prod = 1, i = 1;
	while(i<=num)
	{
		prod = prod*i;
		i++;
	}
	return(prod);
}

float sumsquare(int n)
{
	int i = 1, fac;
	float term, sum = 0;
	while(i<=n)
	{
		fac = fact(i);
		term = float(1/float(fac));
		sum = sum + term;
		i++;
	}
	cout << "\n\n\tThe sum is " << sum;
	return(sum);
}
void main()
{
	clrscr();
	int n;
	float nsum = 0;
	cout << "Enter the value of N : ";
	cin >> n;
	nsum = sumsquare(n);
	cout << "\nThe sum up to N is : " << nsum;
}
