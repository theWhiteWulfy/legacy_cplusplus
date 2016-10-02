// Filename: \\U1Chap07\IM7aj.CPP
#include<iostream.h>
void strfn(char * *s)
{
	char *n = "INDIA";
	*s = n;
}
void main()
{
	char *str = "Bharat";
	strfn(&str);
	for (int x = 0; str[x]>0;x++)
	{
		for(int y = 0; y <= x; y++)
			cout << str[y];
		cout << endl;
	}
}
