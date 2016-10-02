// Filename: \\U1Chap06\CO086a.CPP
#include<fstream.h>
#include<ctype.h>
void ucase_alphabets()
{
	ifstream afile;
	afile.open("PARA.TXT");
	char ch;
	int c=0;
	while(afile)
	{
		afile.get(ch);
		if (isdigit(ch))
			c++;
	}
	cout << "The number of digits are : " << c;
}
void main()
{
	ucase_alphabets();
}