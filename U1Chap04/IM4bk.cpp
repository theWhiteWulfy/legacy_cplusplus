// Filename: \\U1Chap04\IM4bk.CPP
#include <iostream.h>
class integer
{
	int m, n;
	public :
		integer(int, int);	// constructor declared
		void display(void)
		{
			cout << " m = " << m << "\n";
			cout << " n = " << n << "\n";
		}
};
integer::integer(int x, int y) 	// constructor defined
{
	m = x;
	n = y;
}
main()
{
	integer int1(0, 100);	// implicit call
	integer int2 = integer(25, 75);	// explicit calls
	cout << "\nOBJECT1" << "\n";
	int1.display( );
	cout << "\nOBJECT2" << "\n";
	int2.display( );
}
