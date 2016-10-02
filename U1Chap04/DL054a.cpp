// Filename: \\U1Chap04\DL054a.CPP
// The class is as :
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
class TravelPlan
{
	long PlanCode;
	char Place[20];
	int Number_of_travellers;
	int Number_of_buses;
	public :
		TravelPlan();
		void NewPlan();
		void ShowPlan();
};
TravelPlan::TravelPlan()
{
	PlanCode = 1001;
	strcpy(Place, "Agra");
	Number_of_travellers = 5;
	Number_of_buses = 1;
}
void TravelPlan::NewPlan()
{
	cin >> PlanCode;
	gets(Place);
	cin >> Number_of_travellers;
	if (Number_of_travellers < 20)
		Number_of_buses = 1;
	else if (Number_of_travellers < 40)
		Number_of_buses = 2;
	else
		Number_of_buses = 3;
};
void TravelPlan::ShowPlan()
{
	cout << PlanCode << endl
	<< Place << endl
	<< Number_of_travellers << endl
	<< Number_of_buses << endl;
}
void main()
{
	clrscr();
	TravelPlan TP;
	TP.NewPlan();
	TP.ShowPlan();
}