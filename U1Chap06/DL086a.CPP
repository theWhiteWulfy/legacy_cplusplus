// Filename: \\U1Chap06\DL086a.CPP
#include<fstream.h>
#include<ctype.h>
void lcase_alphabets()
{
	ifstream afile;
	afile.open("BOOK.TXT");
	char ch;
	int c=0;
	while(afile)
	{
		afile.get(ch);
		if (islower(ch))
			c++;
	}
	cout << "The number of lowercase alphabets are : " << c;
}
main()
{
	lcase_alphabets();
}