// Filename: \\U1Chap01\IM1aj.CPP
#include<iostream.h>
main()
{
	int i, j, x = 0;
	for(i = 0; i < 5; ++i)
		for(j = 0; j < i; j++)
		{
			x += (i + j - 1);
			cout << x;
		}
	cout << "\n" << x;
}
