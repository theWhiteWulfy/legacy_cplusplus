// Filename: \\U1Chap06\IM6cd.CPP
// Program to read a data file containing name and the marks
# include <fstream.h>
# include <iomanip.h>
# include <conio.h>
void main()
{
	char fname[20],name[20];
	int mark, c = 2;
	cout << "\n Enter the name of the file ";
	cin >> fname;
	clrscr();
	gotoxy(7,3);
	cout << "Name ";
	gotoxy(48,3);
	cout << "Marks ";
	ifstream  afile(fname);
	while (afile)
	{
		afile >> name;
		afile >> mark;
		c++;
		gotoxy(7, c);
		cout << name;
		gotoxy(43,c);
		cout << setw(10) << mark;
	}
	afile.close();
}
