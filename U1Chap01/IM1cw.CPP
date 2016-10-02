// Filename: \\U1Chap01\IM1cw.CPP
#include<iostream.h>
double series (int N)
{
	double prod = 1;
	double sum = 1;
	double res = 0;
	for (int i = 1; i <= N; i++)
	{
		prod = prod * i;
		sum = sum + i;
		res = res + sum/prod;
	}
	return (res);
}
main()
{
	int n;
	double s;
	cout << "Enter N ";
	cin >>n;
	s = series(n);
	cout << "Sum of series "<<s;
}
