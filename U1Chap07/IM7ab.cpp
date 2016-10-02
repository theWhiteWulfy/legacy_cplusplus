// Filename: \\U1Chap07\IM7ab.CPP
#include <iostream.h>
void main()
{
	struct point
	{
		int x, y;
	}polygon[ ] = {{1, 2}, {1, 4}, {2, 4}, {2, 2}};
	point *a;
	a = polygon;
	a++;
	a->x++;
	cout << polygon->x << endl;
}
