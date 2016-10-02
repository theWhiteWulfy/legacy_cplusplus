// Filename: \\U1Chap01\IM1ai.CPP
#include<iostream.h>
main()
{
	int i = 0, x = 0;
	do
	{
		if ( i % 5 == 0)
		{
			x++;
			cout << x;
		}
		++i;
	} while(i < 20);
	cout << "\n"<< x;
}
