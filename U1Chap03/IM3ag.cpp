// Filename: \\U1Chap03\IM3ag.cpp
#include <iostream.h>
class item
{
	static int count;	// count is STATIC
	int number;
	public:
		void getdata(int a)
		{
			number = a;
			count++;
		}
		void getcount(void)
		{
			cout << "count : ";
			cout << count << "\n";
		}
};
int item::count;		// count DEFINED
void main( )
{
	item a, b, c;	// count is initialized to zero
	a.getcount( );	// display count
	b.getcount( );
	c.getcount( );
	a.getdata(100);	// getting data into object a
	b.getdata(200);	// getting data into object b
	c.getdata(300);	// getting data into object c
	cout << "After reading data " << "\n";
	a.getcount( );		// display count
	b.getcount( );
	c.getcount( );
}
