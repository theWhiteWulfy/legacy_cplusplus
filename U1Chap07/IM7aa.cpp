// Filename: \\U1Chap07\IM7aa.CPP
#include <iostream.h>
void strfunc(char **s)
{
	char *n = "Dylan";
	*s = n;
}
void main()
{
	char *str = "Lennon";
	strfunc(&str);
	cout << str << endl;
}
