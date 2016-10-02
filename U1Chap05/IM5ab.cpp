// Filename: \\U1Chap05\IM5ab.CPP
#include <iostream.h>
class A
{
	int x1, x2;
	public:
		A()
		{
			cout << "Base Class A\n";
			x1 = 8;
			x2 = 7;
		}
};
class B : public A
{
	int y;
	public:
		B()
		{
			cout << "Derived class B\n";
		}
};
void main()
{
	B obj;
}