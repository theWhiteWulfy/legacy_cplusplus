// Filename: \\U1Chap06\IM6bd.CPP
// Program to print the frequency of the alphabets and the numeric digits after reading 
// from the text file 
# include <fstream.h>
# include <stdio.h>
# include <conio.h>
void main()
{
	char ch, fname[20];
	int num, fre[26], i;
	clrscr();
	cout << "\n enter the name of the file ";
	gets(fname);
	for (i=0;i<26;i++)
		fre[i] = 0;
	num = 0;
	ifstream afile(fname);
	if (!afile)
		cout << "\n File does not exist " <<endl;
	else
	{
		while (!afile.eof())
		{
			afile.get(ch);
			if (ch >= 'a' && ch<= 'z')
				fre[ch - 'a']++;
			if (ch >= 'A' && ch<= 'Z')
				fre[ch - 'A']++;
			if (ch >= '0' && ch<= '9')
				num++;
		}
		afile.close();
		for (i=0;i<26;i++)
		{
			cout<< "\n Frequency of " << char( i + 'A') << " is " << fre[i]<<endl;
			getch();
		}
		cout << "\n Frequency of the numeric digits " << num << endl;
	}
}
