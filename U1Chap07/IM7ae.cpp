// Filename: \\U1Chap07\IM7ae.CPP
#include <iostream.h>
struct Coordinate
{
	int x;
	int y;
};
void main()
{
	Coordinate V, *p;
	V.x = 9;
	V.y = 11;
	p = &V;
	cout << p->x << " " << p->y;
}
