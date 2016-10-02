// Filename: \\U1Chap07\IM7ah.CPP
#include<iostream.h>
void fun(int, int*);
int main( )
{
	int i, b = 5, a[5] = {2, 4, 6, 8, 10};
	for(i = 0; i < 5; i++)
	{
		fun(a[i], &b);
		cout << a[i] << b << endl;
	}
	return 0;
}
void fun(int p, int *q)
{
	p = *(q) += 2;
}
