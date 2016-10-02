// Filename: \\U1Chap06\DL106b.CPP
#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class FLIGHT {			
	int Fno;	//Flight Number
	char From[20];	//Flight Starting Point
	char To[20];	//Flight Destination
	public:
		char* GetFrom() {return From;}
		char* GetTo() {return To;}
		void Enter() {cin>>Fno;gets(From);gets(To);}
		void Display() {cout<<Fno<< ":"<<From<< ":"<<To<<endl;}
};
void Flight_Enter()
{	
	FLIGHT F;
	fstream fin;
	fin.open("FLIGHT.DAT", ios::app|ios::out|ios::binary); // Creates the data file
	int n, i;
	clrscr();
	cout << "Enter how many flight data you want to enter : ";
	cin >> n;
	for (i=0; i<n; i++)
	{
		cout << "Enter data for flight : " << i+1;
		F.Enter();
		fin.write((char *)&F, sizeof(FLIGHT));
	}
	fin.close();
}
void Read() {
	FLIGHT F;
	ifstream fin;
	fin.open("FLIGHT.DAT", ios::binary);
	while(fin.read((char*)&F, sizeof(FLIGHT))) {
		if (strcmp(F.GetTo(), "Mumbai") == 0)
			F.Display();
	}
	fin.close();
}
void main()
{
	Flight_Enter();
	Read();
}