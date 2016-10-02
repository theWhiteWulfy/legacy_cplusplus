// Filename: \\U1Chap01\DL081a.CPP
#include<iostream.h>
#include<ctype.h>
void main()
{
	char Text[] = "Mind@Work!";
	for (int I = 0; Text[I] != '\0'; I++)
	{
		if (!isalpha(Text[I]))
			Text[I] = '*';
		else if (!isupper(Text[I]))
			Text[I] = Text[I] + 1;
		else
			Text[I] = Text[I+1];
	}
	cout<<Text;
} 
