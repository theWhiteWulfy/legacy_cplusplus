// Filename: \\U1Chap06\IM6ba.CPP
// Function to write the object of class into binary file
# include <fstream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
class Student
{
	int  Sno;
	char   Sname[10];
	public :
		void  getit()
		{
			cout << "\nEnter serial no. ";
			cin>>Sno;
			cout << "Enter name: ";
			gets(Sname);
				}
	void  showit()
	{
	       cout<<Sno;
	       cout<<Sname;
	}
};	

void read()
{
	Student stud;
	ofstream efile;
	efile.open("Student.dat",ios :: binary);
	int  n,i;
	cout<< "Enter how many student ";
	cin>>n;
	for (i =0; i<n ;i++)
	{
		stud.getit();
		efile.write((char *)&stud, sizeof(stud));
	}
}
// Function to display the object of class
void display()
{
	Student stud;
	ifstream efile;
	efile.open("Student.dat",ios :: binary);
	while(efile)
	{
		efile.read((char *)&stud , sizeof(stud));
		if(!efile)
			exit(0);
		stud.showit();
	}
}
void main()
{
	clrscr();
	read();
	display();
}