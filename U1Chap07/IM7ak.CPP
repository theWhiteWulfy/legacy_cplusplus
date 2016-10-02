// Filename: \\U1Chap07\IM7ak.CPP
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
void main()
{
	clrscr();
	char  *s = "HUMAN";
	int L = strlen(s);
	for (int c =0;c<L;c++)
		if (islower(s[c]))
			s[c] = toupper(s[c]);
		else
			if (c%2 ==0)
				s[c] = 'E';
			else
				s[c] = tolower(s[c]);
	cout<<"New Message :"<<s<<"\n";
}