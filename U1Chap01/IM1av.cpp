// Filename: \\U1Chap01\IM1av.CPP
#include<iostream.h>
void main()
{
	int f1(int b);
	int a, i;
	for (i = 1; i <= 5; i++)
	{
		a = f1(i);
		cout << a;
	}
}
int f1(int b)
{
	int x;
	x = b * b;
	return (x);
}
