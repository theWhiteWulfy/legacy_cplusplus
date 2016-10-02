// Filename: \\U1Chap06\DL056b.CPP
// The function is :
#include <fstream.h>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>
class Student							
{
	char S_Admno[10];  // Admission number of student
	char S_Name[30];  // Name of student
	int Percentage;  // Marks Percentage of student
	public :
		void EnterData()
		{
			gets(S_Admno); gets(S_Name); cin >> Percentage;
		}
		void DisplayData()
		{
			cout << setw(12) << S_Admno;
			cout << setw(32) << S_Name;
			cout << setw(3) << Percentage << endl;
		}
		int ReturnPercentage() {return Percentage;}
};
void data_read()
{	
	Student std;
	fstream stdfile;
	stdfile.open("STUDENT.DAT", ios::app|ios::out|ios::binary); // Creates the data file
	int n, i;
	clrscr();
	cout << "Enter how many students data you want to enter : ";
	cin >> n;
	for (i=0; i<n; i++)
	{
		cout << "Enter data for student : " << i+1;
		std.EnterData();
		stdfile.write((char *)&std, sizeof(Student));
	}
	stdfile.close();
}
void Perabove75()
{
	Student std;
	fstream File;
	File.open("STUDENT.DAT", ios::binary|ios::in);
	while (File.read((char *)&std, sizeof(Student)))
		if (std.ReturnPercentage() > 75)
			std.DisplayData();
	File.close();
}
void main()
{
	clrscr();
	data_read();
	Perabove75();
}