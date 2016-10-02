// Filename: \\U1Chap05\IM5ac.CPP
// Program to find the area of rectangle and the area of the isosceles triangle
# include <iostream.h>
# include <conio.h>
class area_c1
{
	public :
		double height;
		double width;
};
class rectangle : public area_c1
{
	public:
		void area()
		{
			cout << "Area of the rectangle " << (height*width);
		}
		rectangle(int x, int y)
		{
			height = x;
			width = y;
		}
};
class isosceles : public area_c1
{
	public:
		void area()
		{
			cout << "\nArea of the isosceles triangle is " << (height * width * 1/2);
		}
		isosceles(int a, int b)
		{
			height = a;
			width = b;
		}
};
void main()
{
	rectangle rec(4,5);
	isosceles iso(6,7);
	clrscr();
	rec.area();
	iso.area();
}