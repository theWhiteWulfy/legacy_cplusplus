// Filename: \\U1Chap06\AI076a.CPP
#include <fstream.h>
#include <conio.h>
#include <ctype.h>
// The function is :
void Count_Word()
{
	fstream tfile("STORY.TXT", ios :: in);
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
				if (tolower(str)=='h')
					tfile.get(str);
					if (tolower(str)=='e')
						tfile.get(str);
				if (str==' ')
					c++;
			}
		}
	}
	tfile.close();
	cout << "Number of times 'the' appear is  "<< c;
}
main()
{
	Count_Word();
	getch();
}

