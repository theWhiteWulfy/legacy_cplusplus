// Filename: \\U1Chap06\IM6be.CPP
# include <fstream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
class Sanctuary
{
	char location[20];
	int no_of_animals;
	public :
		void readdata()
		{
			cout << "Enter location : ";
			gets(location);
			cout << "Enter no. of animals :";
			cin >> no_of_animals;
		}
		void writedata()
		{
			cout << location << " " << no_of_animals << endl;
		}
};
// Function to write the object of class to the binary file
void  create(Sanctuary S)
{
	ofstream afile;
	afile.open("Sanctuary.dat", ios::out | ios :: binary);
	if (!afile)
	{
		cout << "\n Unable to open the file ";
		exit(1);
	}
	S.readdata();
	afile.write((char *)&S,sizeof(S));
	afile.close();
}
// Function to read the object of class from
// the binary file
void read_file()
{
	ifstream afile;
	afile.open("Sanctuary.dat", ios::in | ios :: binary);
	if (!afile)
	{
		cout << "\n File does not exist ";
		exit(1);
	}
	Sanctuary S;
	while(afile)
	{
		afile.read((char *) &S, sizeof(S));
		S.writedata();
	}
	afile.close();
}
void main()
{
	clrscr();
	Sanctuary S;
	create(S);
	read_file();
}
