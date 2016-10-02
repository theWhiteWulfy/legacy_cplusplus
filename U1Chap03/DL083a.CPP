// Filename: \\U1Chap03\DL083a.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class Garments
{
	char GCode[15];
	char GType[15];
	int GSize;
	char GFabric[20];
	float GPrice;
	public:
		// Constructor to assign initial values
		Garments()
		{
			strcpy(GCode, "NOT ALLOTTED");
			strcpy(GType, "NOT ALLOTTED");
			strcpy(GFabric, "NOT ALLOTTED");
			GSize = 0;
			GPrice = 0;
		}
		// Function to calculate value
		void Assign()
		{
			if (strcmp(GFabric, "TROUSER") == 0)
			{
				GPrice = 1300;
			}
			else
			if (strcmp(GFabric, "SHIRT") == 0)
			{
				GPrice = 1100 - (1100 * (10/100));
			}
		}
		// Function to input the values
		void Input()
		{
			cout << "Enter code : ";
			gets(GCode);
			cout << "Enter type : ";
			gets(GType);
			cout << "Enter size : ";
			cin >> GSize;
			cout << "Enter fabric : ";
			gets(GFabric);
			Assign();
		}
		// Function to display values
		void Display()
		{
			cout << "Code : ";
			puts(GCode);
			cout << "Type : ";
			puts(GType);
			cout << "Size : " << GSize << endl;
			cout << "Fabric : ";
			puts(GFabric);
			cout << "Price : " << GPrice;
		}
};
void main()
{
	clrscr();
	Garments G;
	G.Input();
	G.Display();
}