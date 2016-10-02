// Filename: \\U1Chap07\IM7ai.CPP
#include<iostream.h>
#include<string.h>
void string_func(char *str)
{
	int i, j, len = strlen(str);
	for(i = 0; i < len; i++)
	{
		for(j=0; j<=i; j++)
			cout << str[i];
		cout << endl;
	}
}
void main( )
{
	string_func("CALIFORNIA");
}
