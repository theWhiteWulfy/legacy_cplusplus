// Filename: \\U1Chap05\IM5aa.CPP
#include <iostream.h>
#include <conio.h>
class A
{
	int  x1, x2, x3;
	public:
		A()
		{
			x1 = 1;
			x2 = 2;
			x3 = 3;
			cout<< "Constructor of A\n";
		}
		void prn()
		{
			cout << x1 << x2 << x3 << endl;
		}
};
class B : public A
{
	int  y1, y2, y3;
	public:
		B()
		{
			y1 = 10;
			y2 = 12;
			y3 = 15;
			cout<< "Constructor  of  B\n";
		}
		void prn()
		{
			cout << y1 <<y2 << y3 <<endl;
		}
};
class C : public A
{
	int z1,z2, z3;
	public:
		C()
		{
			z1 = 21;
			z2 = 22;
			z3 = 24;
			cout << "Constructor  of C\n";
		}
};
void main()
{
	C ob;
}
