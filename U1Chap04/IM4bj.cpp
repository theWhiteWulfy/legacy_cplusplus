// Filename: \\U1Chap04\IM4bj.CPP
#include <iostream.h>
#include <conio.h>
class sum
{
	int x, y, total;
	public:
		sum (int a, int b)
		{
			x = a;
			y = b *2;
		}
		void display()
		{
			total = x + y;
			cout << total;
		}
};
void main()
{
	sum S(9, 5);
	S.display();
}
		