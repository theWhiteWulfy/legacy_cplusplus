// Filename: \\U1Chap04\IM4da.CPP
// Program to generate a series
#include<iostream.h>
class Fabonnaci
{
	int a, b, c, N, i;
	public:
		Fabonnaci()
		{
			a = 1;
			b = 1;
			N = 20;
			i = 2;
		}
		void display()
		{
			cout << "\n" << a;
			cout << "\n" << b;
			while(i<N)
			{
				c = a+ b;
				cout << "\n" << c;
				i++;
				a = b;
				b = c;
			}
		}
};
void main()
{
	Fabonnaci fab;
	fab.display();
};
