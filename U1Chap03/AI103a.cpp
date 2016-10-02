// Filename: \\U1Chap03\AI103a.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class STOCK {
	int ICode;
	char Item[20];
	float Price;
	int Qty;
	float Discount;
	void FindDisc();
	public:
		void Buy() {
			cin>>ICode;
			gets(Item);
			cin>>Price>>Qty;
			FindDisc();
		}
		void ShowAll() {
			cout<<ICode<<Item<<Price<<Qty<<Discount;
		}
};
void STOCK::FindDisc() {
	if(Qty<=50)
		Discount=0;
	else if (Qty<=100)
		Discount=5;
	else
		Discount=10;
}
void main()
{
	clrscr();
	STOCK S;
	S.Buy();
	S.ShowAll();
}