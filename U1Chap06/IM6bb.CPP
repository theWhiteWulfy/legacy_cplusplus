// Filename: \\U1Chap06\IM6bb.CPP
// Program to read a text file and create another file that is identical
// except that every sequence of consecutive blank space is replaced by single blank.
# include <fstream.h>
# include <string.h>
#include<conio.h>

void main()
{
	char ch;
	int flag;
	ifstream infile;
	ofstream outfile;
	infile.open ("IN.DAT", ios::in);
	outfile.open("OUT.DAT",ios::out);
	flag = 1;
	while (infile)
	{
		infile.get(ch);
		cout<<ch;
		getch();
		if (ch != ' ')
			flag = 1;
		if (ch == ' ')
			flag--;
		if (flag >= 0)
			outfile.put(ch);
	}
	infile.close();
	outfile.close();
}