// Filename: \\U1Chap03\AI073a.CPP
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
class Travel
{
	char T_Code[10];
	int No_of_Adults;
	int No_of_Children;
	int Distance;
	float TotalFare;
	public:
		Travel()
		{
			strcpy(T_Code, "NULL");
			No_of_Adults = 0;
			No_of_Children = 0;
			Distance = 0;
			TotalFare = 0;
		}
		void EnterTravel();
		float AssignFare();
		void ShowTravel();
};
// Class member function to input the values of the data members
void Travel::EnterTravel()
{
	cout << "Enter T_Code: ";
	gets(T_Code);
	cout << "Enter No. of Adults: ";
	cin >> No_of_Adults;
	cout << "Enter No. of Children: ";
	cin >> No_of_Children;
	cout << "Distance: ";
	cin >> Distance;
	TotalFare = AssignFare();
}
// Class member function to calculate tour fare
float Travel::AssignFare()
{
	float Fare = 0.0;
	if (Distance < 500)
		Fare = (No_of_Adults * 200) + (No_of_Children * 100);
	else
		if ((Distance >= 500) && (Distance < 1000))
			Fare = (No_of_Adults * 300) + (No_of_Children * 150);
		else
			if (Distance >= 1000)
				Fare = (No_of_Adults * 500) + (No_of_Children * 250);
		return Fare;
}
// Class member functions to displays the content of all the data members
void Travel::ShowTravel()
{
	cout << "TCode: " << T_Code << endl;
	cout << "No. of Adults: " << No_of_Adults << endl;
	cout << "No. of children: " << No_of_Children << endl;
	cout << "Distance: " << Distance << endl;
	cout << "Total fare : " << TotalFare;
}
// The main function to invoke all class member functions
void main()
{
	clrscr();
	Travel Trv;
	Trv.EnterTravel();
	Trv.ShowTravel();
}