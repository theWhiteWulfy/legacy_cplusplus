// Filename: \\U1Chap01\DL051a.CPP
#include <iostream.h>
const int Multiple = 3;
void main()
{
	int Value=15;
	for (int Counter = 1; Counter <= 5; Counter++, Value -= 2)
		if (Value%Multiple == 0)
		{
			cout << Value * Multiple;
			cout << endl;
		}
	else
		cout << Value+Multiple << endl;
}
