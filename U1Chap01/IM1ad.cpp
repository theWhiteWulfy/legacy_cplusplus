// Filename: \\U1Chap01\IM1ad.CPP
#include <iostream.h>
void main()			// Correction 1
{
	int j = 99, a;
	float u = 10.0;
	cin >> a;		// Correction 2
	while(a <= j)		// Correction 3
	{
		a+=10;
		u*=a;		// Correction 4
	}
}
