// Filename: \\U1Chap06\AI096b.CPP
#include<fstream.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
class CLUB {
	int Mno;		//member Number
	char Mname[20]; 	//Member Name
	char type;		//Member Type : L Life Member  M Monthly Member G Guest
	public :
		void Register( );	//Function to enter the content
		void Display( ); 	//Function to display all data members
		char WhatType( ) {return type;}
};
void CLUB::Register()
{
	cout << "\nEnter member no. ";
	cin >> Mno;
	cout << "Enter member name ";
	gets(Mname);
	cout << "Enter member type ";
	cin >> type;

}
void Read_Data()
{
	CLUB U;
	fstream afile;
	afile.open("CLUB.DAT", ios::app|ios::out|ios::binary); // Creates the data file
	int n, i;
	clrscr();
	cout << "Enter how many members data you want to enter : ";
	cin >> n;
	for (i=0; i<n; i++)
	{
		cout << "Enter data for member : " << i+1;
		U.Register();
		afile.write((char *)&U, sizeof(CLUB));
	}
	afile.close();
}
void CLUB::Display()
{
		cout << "Member No. : " << Mno << endl;
		cout << "Member name " << Mname << endl;
		cout << "Member type " << type << endl;
}
void show_Detail() {
	fstream afile;
	CLUB U;
	char S;
	afile.open("CLUB.DAT", ios::binary|ios::in);
	while (afile.read((char *)&U, sizeof(CLUB)))
	{
		U.Display();
		S = U.WhatType();
		if ((S == 'L') || (S == 'M'))
			U.Display();
	}
	afile.close();
}
void main()
{
	Read_Data();
	show_Detail();
}