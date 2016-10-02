// Filename: \\U1Chap03\IM3aa.CPP
#include <iostream.h>
class Num
{
	int x;
	float y;
	public :
		void init(void)
		{
			x = y = 0;
		}
		void read(int i, float j)
		{
			x = i;
			y = j;
		}
		void display(void)
		{
			cout << "x => " << x << "\n";
			cout << "y => " << y << "\n";
		}
};
void main()
{
	Num obj1, obj2;
	obj1.init();
	obj2.init();
	obj1.read(15, 11.21);
	obj1.display();
	obj2.display();
}
