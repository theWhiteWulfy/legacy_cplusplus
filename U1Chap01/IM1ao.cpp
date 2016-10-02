// Filename: \\U1Chap01\IM1ao.CPP
#include<iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int a[5] = {5, 10, 15, 20, 25};
	int m, i, j, k = 1;
	i = ++a[1];
	j = a[2]++;
	m = a[i++ - 8];
	cout<<i<<j<<m;
}
