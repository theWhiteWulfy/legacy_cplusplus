// Filename: \\U1Chap02\DL102a.CPP
// Program using function overloading to calculate the area of rectangle, area of triangle
// using Hero’s formula and area of circle.
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <math.h>
float area(float a, float b , float c);
float area(float l, float w);
float  area(float  r);
void main()
{
	char ch;
	float len, wid, n1, n2, n3, ar;
	float  radius;
	int choice1;
	clrscr();
	cout << "\n1. For area of triangle ";
	cout << "\n2. For area of rectangle ";
	cout << "\n3.  For area of circle ";
	cout << "\nEnter choice : ";
	cin >> choice1;
	if (choice1 == 1)
	{
		cout << "\nEnter the three sides of triangle : ";
		cin >> n1 >> n2 >> n3;
		ar = area(n1, n2, n3);
		cout << "\nArea of triangle is : " << ar;
	}
	if (choice1 == 2)
	{
		cout << "\nEnter the length : ";
		cin >> len;
		cout << "\nEnter the width : ";
		cin >> wid;
		cout << "\nArea of rectangle is: " << area(len, wid);
	}
	if (choice1 == 3)
	{
		cout << "\nEnter the radius : ";
		cin >> radius;
		cout << "\nArea of circle : " << area(radius);
	}
}
float area(float a, float b , float c)
{
	float s;
	float a1;
	s = (a + b + c) / 2;
	a1 = sqrt(s * (s-a) * (s-b) * (s-c));
	return(a1);
}
float area(float l, float w)
{
	return(l*w);
}
float  area( float  radius)
{
	return(3.14 * radius * radius);
}