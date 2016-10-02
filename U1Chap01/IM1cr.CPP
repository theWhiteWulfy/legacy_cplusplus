// Filename: \\U1Chap01\IM1cr.CPP
#include <iostream.h>
#include <conio.h>
// Function to calculate the series
// 1/1^2 + 1/3^2 + 1/5^2 + 1/7^2 +...+ 1/n^2  “
float sumsquare(int n)
{
	int i = 1, j = 0;
	float term, sum = 0.0;
	while (i < n)
	{
		term = 1/float(i*i);
		sum = sum + term;
		i = i + 2;
		j++;
	}
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
	cout << "The sum up to N is : " << nsum;
}
