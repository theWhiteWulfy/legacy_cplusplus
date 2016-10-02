//Filename: \\U1Chap05\DL065a.CPP
#include<iostream.h>
#include<conio.h>
class furniture
{
	char Type;
	char Model[10];
	public:	
		furniture() { };
		void Read_fur_details();
		void Disp_fur_details();
};
class sofa : public furniture
{
	int no_of_seats;
	float cost_of_sofa;
	public:
		void Read_sofa_details();
		void Disp_sofa_details();
};
class office : private sofa
{
	int no_of_pieces;
	char delivery_date[10];
	public:
		void Read_office_details();
		void Disp_office_details();
};
void main()
{
	clrscr();
	office MyFurniture;
	cout << sizeof(MyFurniture);
}