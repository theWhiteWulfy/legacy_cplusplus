// Filename: \\U1Chap01\IM1ay.CPP
#include<iostream.h>
int sum(int, int);
main( )
{
	int i, j, k;
	k = sum(i,j);	// Correction 1
	cout << k;	// Correction 2
	return 0;
}
int sum(int i, int j)	// Correction 3
{
	return (i * j);
}
