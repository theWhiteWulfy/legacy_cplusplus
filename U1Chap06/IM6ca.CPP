// Filename: \\U1Chap06\IM6ca.CPP
// Program to create a text file and then create another text
//file by converting each line of the newly created text file into an uppercase string.
# include <fstream.h>
# include <stdio.h>
# include <conio.h>
# include <ctype.h>
void main()
{
	char fname[20];
	char str[80], ch = 'y';
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
	// Copy each line after converting into the upper case
	ofstream temp("temp.dat");
	ifstream newfile(fname);
	while (newfile)
	{
		newfile.get(ch);
		if (ch != '\n')
			ch = toupper(ch);
		temp.put(ch);
	}
	newfile.close();
	temp.close();
	clrscr();
	cout<< "\n The output file is \n";
	ifstream yfile("temp.dat");
	count = 0;
	while (!yfile.eof())
	{
		yfile.getline(str,80);
		cout << str << "\n";
		count++;
		// Check whether the number of lines on the display exceed 22 or not
		if ((count % 22) == 0)
		{
			cout << "\n Press any key to continue ";
			cin >> ch;
		}
	}
	yfile.close();
}
