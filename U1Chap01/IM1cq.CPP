// Filename: \\U1Chap01\IM1cq.CPP
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
// Function to calculate the series
// 1 + 1/2 + 1/3 + 1/4 +...+ 1/n
float sumseries(int n)
{
	int i = 1;
	float term, sum = 0.0;
	while (i <= n)
	{
		term = 1/float(i);
		sum = sum + term;
		i++;
	}
	cout << "\n\n\tThe sum is : " << setw(15)    // setwidth
		<< setprecision(4)    // set position of decimal point
		<< setiosflags(ios::left)   // set left justified output
		<< setiosflags(ios::showpoint)  // always show decimal point
		<< setiosflags(ios::fixed)    // set fixed notation for display
		<< sum;
	return(sum);
}
void main()
{
	clrscr();
	int n, nsum = 0;
	cout << "Enter the value of N : ";
	cin >> n;
	nsum = sumseries(n);
	cout << "The sum up to N is : " << (float)nsum;
}