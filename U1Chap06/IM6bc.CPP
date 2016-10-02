// Filename: \\U1Chap06\IM6bc.CPP
// Program to create and read  text file 
# include <fstream.h>
# include <stdio.h>
# include <conio.h>
# include <ctype.h>
void main()
{
	char fname[20], str[80], ch = 'y';
	int count;
	cout << "\n Enter the name of the file  ";
	gets(fname);
	ofstream  oldfile(fname);
	while ((ch == 'Y') || (ch == 'y'))
	{
		cout << "\n Enter a line of text ";
		gets(str);
		oldfile << str << "\n";
		cout << "\n Want to add more lines (Y/N) ";
		cin >> ch;
	}
	oldfile.close();
	clrscr();
	cout<< "\n The output file is \n";
	ifstream yfile(fname);
	count = 0;
	while (!yfile.eof())
	{
		yfile.getline(str,80);
		cout << str << "\n";
		count++;
		//  Check whether the number of
		// lines on the display exceed 22 or not
		if ((count % 22) == 0)
		{
			cout << "\n Press any key to continue ";
			cin >> ch;
		}
	}
	yfile.close();
}