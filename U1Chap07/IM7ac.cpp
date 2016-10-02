// Filename: \\U1Chap07\IM7ac.CPP
#include <iostream.h>
void main()
{
	int a = 32;
	int *ptr = &a;
	char ch = 'A';
	char *cho = &ch;
	cho += a;
	*ptr += ch;
	cout << a << " " << ch << endl;
}
