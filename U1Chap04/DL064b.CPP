// Filename: \\U1Chap04\DL064b.CPP
#include<iostream.h>
class Interview
{
	int month;
	public:
		Interview(int y) { month = y;} // Constructor 1
		Interview(Interview &t) // Constructor 2
		{
			month = t.month;
		}
};
void main()
{
	Interview In(10);
}
