// Filename: \\U1Chap01\IM1czac.CPP
#include<iostream.h>
void sumfn(int last)
{
	auto int sum = 0;
	static int sum2 = 0;
	for (int i = last; i>0; i--)
		sum +=i;
	sum2 += sum;
	cout << sum << " " << sum2 << endl;
}
void main( )
{
	for(int i = 1; i<11; i++)
		sumfn(i);
}