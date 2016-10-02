// Filename: \\U1Chap01\IM1ar.CPP
#include<iostream.h>
void main()
{
	int a, b = 0;
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	for(a = 0; a< 10; ++a)
		b += c[a];
	cout << b;
}