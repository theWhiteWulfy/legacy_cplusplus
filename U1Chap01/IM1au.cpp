// Filename: \\U1Chap01\IM1au.CPP
#include<iostream.h>
int add(int);
void main()
{
	int i = 4, a;
	a = add(i);
	cout << a;
}
int add(int j)
{
	if(j >= 4)
		j = j * j;
	else
		j = j * 2;
	return (j);
}
