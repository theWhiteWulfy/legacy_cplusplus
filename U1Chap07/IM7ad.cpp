// Filename: \\U1Chap07\IM7ad.CPP
#include <iostream.h>
void display(char *s)
{
	for (int x = 0; s[x] > 0; x++)
	{
		for (int y = 0; y <= x; y++)
			cout << s[y];
		cout << endl;
	}
}
void main()
{
	char *t = "LAND";
	display(t);
}
