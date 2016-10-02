// Filename: \\U1Chap01\IM1cn.CPP
// Program to find total number of vowels, digits and other characters in string
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
	char str[50];
	int i, vc= 0, dc = 0, ot = 0;
	clrscr();
	cout << "\n\tEnter any string -> ";
	gets(str);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = tolower(str[i]);
		if (((str[i] == 'a')) || ((str[i] == 'e')) || ((str[i] == 'o')) || ((str[i] == 'u')))
			vc++;
		else
			if ((str[i] >= '0') && (str[i] <= '9'))
				dc++;
			else
				ot++;
		i++;
	}
	cout << "\n\tNumber of vowels are : " << vc;
	cout << "\n\tNumber of digits are : " << dc;
	cout << "\n\tNumber of other characters are : " << ot;
}