// Filename: \\U1Chap01\CO051a.CPP
#include<iostream.h>
int x = 10;
void pass(int&a, int b, int&c)
{
	int x = 4;
	c += x;
	a *= ::x;
	b += c;
}
void main()
{
	int y = 1, x = 2;
	pass(y, ::x, x);
	cout << x << ':' << y << ':' << ::x;
	cout << endl;
	pass(::x, x, y);
	cout << x << ':' << y << ':' << ::x;
}
