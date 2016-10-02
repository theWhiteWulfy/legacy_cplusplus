// Filename: \\U1Chap04\IM4ba.CPP
#include <iostream.h>
class example
{
	static int x;
	int y, z;
	public :
		example (int i, int j)
		{
			y = i;
			z = j;
			x++;
		}
		void display()
		{
			cout << "y  = " << y << endl;
			cout << "z = " << z << endl;
		}
		static void dis()
		{
			cout << "x = " << x << endl;
		}
};
int  example::x;
void main()
{
	example O1(7,5), O2(7,6), O3(2,7);
	O1.display();
	example::dis();
	O2.display();
	O3.display();
}