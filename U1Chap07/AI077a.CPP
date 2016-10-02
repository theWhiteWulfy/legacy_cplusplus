// Filename: \\U1Chap07\AI077a.CPP
#include <iostream.h>
void main()
{
	int Numbers[] = {2, 4, 8, 10};
	int *ptr = Numbers;
	for (int C = 0; C < 3; C++)
	{
		cout << *ptr << "@";
		ptr++;
	}
	cout << endl;
	for (C = 1; C < 4; C++)
	{
		(*ptr) *= 2;
		--ptr;
	}
	for (C = 1; C < 4; C++)
		cout << Numbers[C] << "#";
	cout << endl;
}
