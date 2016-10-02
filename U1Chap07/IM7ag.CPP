// Filename: \\U1Chap07\IM7ag.CPP
#include<iostream.h>
int a = 3;
void demo(int &x, int y, int *z)
{
	a += x;
	y *= a;
	*z = a+y;
	cout << a << " " << x << " " << y << " " << *z << endl;
}
void main( )
{
	int a = 2,b = 5;
	demo (::a, a, & b);
	cout << ::a << a << b << endl;
}
