// Filename: \\U1Chap06\AI096a.CPP
#include<fstream.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void COUNT_TO()
{
	fstream tfile("NOTES.TXT", ios :: in);
	char str;
	int c=0;
	clrscr();
	while(tfile)
	{
		tfile.get(str);
		if (str==' ')
		{
			tfile.get(str);
			if (tolower(str)=='t')
			{
				tfile.get(str);
				if (tolower(str)=='o')
					tfile.get(str);
				if (str==' ')
					c++;
			}
		}
	}
	tfile.close();
	cout << "Number of times 'to' appear is  "<< c;
}
main()
{
	clrscr();
	COUNT_TO();
	return 0;
}