// Filename: \\U1Chap01\DL051b.CPP
#include<iostream.h>
#include<string.h>
#include<ctype.h>
void Convert(char Str[], int Len)
{
	for (int Count=0; Count<Len; Count++)
	{
		if (isupper(Str[Count]))
			Str[Count] = tolower(Str[Count]);
		else if (islower(Str[Count]))
			Str[Count] = toupper(Str[Count]);
		else if (isdigit(Str[Count]))
			Str[Count] = Str[Count] + 1;
		else Str[Count] = '*';
	}
}
void main()
{
	char Text[] = "CBSE Exam 2005";
	int Size=strlen(Text);
	Convert(Text, Size);
	cout<<Text<<endl;
	for (int C = 0, R = Size - 1; C <= Size/2; C++, R--)
	{
		char Temp = Text[C];
		Text[C] = Text[R];
		Text[R] = Temp;
	}
	cout << Text << endl;
}
