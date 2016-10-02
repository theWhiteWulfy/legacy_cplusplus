// Filename: \\U1Chap03\IM3af.CPP
#include <iostream.h>
#include <conio.h>
class X
{
	int a;
	static int c;
	public:
		void initial(void)
		{
			a = c = 0;
		}
		static void call()
		{
			X obj;
			cout << c << obj.a;
		}
};
void main()
{
	clrscr();
	X clx;
	clx.initial();
	clx.call();
}
