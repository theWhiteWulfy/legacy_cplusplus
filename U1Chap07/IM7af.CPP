// Filename: \\U1Chap07\IM7af.CPP
#include<iostream.h>
int a = 10;
void main( )
{
	void demo(int &, int, int*);
	int a = 20,b = 5;
	demo (::a , a ,  & b);
	cout << ::a << a << b << endl;
}
void demo(int &x, int y, int *z)
{
	a += x;
	y *= a;
	*z = a+y;
	cout << x << y << *z << endl;
}
