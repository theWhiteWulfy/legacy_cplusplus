// Filename: \\U1Chap01\IM1aw.CPP
#include<iostream.h>
void square(int, int);
void main()
{
	int i = 4, j = 10;
	square(i, j);
	cout << i;
	cout << j;
}
void square(int i, int j)
{
	i = i * j;
	j = j * j;
}
