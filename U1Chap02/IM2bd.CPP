// Filename: \\U1Chap02\IM2bd.CPP
// Program using function overloading to calculate
// the area of rectangle and area of triangle  using Hero’s formula.
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <math.h>
float area(float a, float b , float c);
float area(float l, float w);
void main()
{
	char ch;
	float len, wid, n1, n2, n3, ar;
	int choice1;
	clrscr();
	cout << "\n1. For area of triangle ";
	cout << "\n2. For area of rectangle ";
	cin >> choice1;
	if (choice1 == 1)
	{
		cout << "\nEnter the three sides of triangle : ";
		cin >> n1 >> n2 >> n3;
		ar = area(n1, n2, n3);
		cout << "\nArea of triangle is: " << ar;
	}
	if (choice1 == 2)
	{
		cout << "\nEnter the length ";
		cin >> len;
		cout << "\nEnter the width: ";
		cin >> wid;
		cout<< "\nArea of rectangle is: " << area(len, wid);
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
