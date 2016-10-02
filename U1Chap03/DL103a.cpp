// Filename: \\U1Chap03\DL103a.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class ITEM {
	int Code;
	char Iname[20];
	float Price;
	int Qty;
	float Offer;
	void GetOffer();
	public:
		void GetStock() {
			cin>>Code;
			gets(Iname);	
			cin>>Price>>Qty;
			GetOffer();
		}
		void ShowItem() {
			cout<<Code<<Iname<<Price<<Qty<<Offer;
		}
};
void ITEM::GetOffer() {
	if(Qty<=50)
		Offer=0;
	else if (Qty<=100)
		Offer=5;
	else
		Offer=10;
}
void main()
{
	clrscr();
	ITEM I;
	I.GetStock();
	I.ShowItem();
}