// Filename: \\U1Chap01\IM1am.CPP
#include<iostream.h>
void main()
{
	int i, j, k, x = 0;
	for(i = 0; i < 5; ++i)
		for(j = 0; j < i; j++)
		{
			switch (i + j - 1)
			{
				case -1 :
				case  0 :
					x += 1;
					break;
				case  1 :
				case  2 :
				case  3 :
					x += 3;
				default :
					x += 3;
			}
			cout << x;
	}
	cout<<"\n"<<x;
}
