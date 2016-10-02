// Filename: \\U1Chap06\DL056a.CPP
#include <fstream.h>
#include <conio.h>
#include <ctype.h>
void countLine()
{	
	char Aline[80];
	int Count  = 0;
	ifstream File("LINES.TXT");
	while (File.getline(Aline, 80, '\n'))
		if (Aline[0] == 'A')
			Count++;
	File.close();
	cout << "No. of lines started with A : " << Count << endl;
}
void main( )
{
	clrscr();
	countLine();
}
