// Filename: \\U1Chap01\IM1az.CPP
#include<iostream.h>
int div(int, int);
main( )
{
	int a, b, c;
	c = div(a,b);	// Correction 1
	cout << c;
	return 0;
}
int div(int a, int b)
{
	a = a + b;
	b = b + b;
	return(a,b);	// Correction 2
}
