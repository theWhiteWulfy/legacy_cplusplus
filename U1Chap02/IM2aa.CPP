// Filename: \\U1Chap02\IM2aa.CPP
#include <iostream.h>
int area(int s)
{
	return(s * s);
}
float area(int b , int h)
{
	return(0.5 * b * h);
}
main()
{
	cout << area(5) << endl;
	cout << area(4,3) << endl;
	cout << area(6, area(3)) << endl;
	return 0;
}