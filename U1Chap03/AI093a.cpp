// Filename: \\U1Chap03\AI093a.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class HOTEL {
	int Rno, NOD;
	char Name[30];
	float Tariff;
	float CALC( ) {
		float temp=NOD*Tariff;
		if(temp>10000)
			return (1.05*temp);
		return temp;
	}	
	public:
		void Checkin() {
			cout<<"Enter The Room Number: ";
			cin>>Rno;
			cout<<"Enter The Customer Name: ";
			gets(Name);
			cout<<"Enter Room Charges per day: ";
			cin>>Tariff;
			cout<<"Enter Number Days stayed By Customer: ";
			cin>>NOD;
		}
		void Dispinfo() {
			cout<<"\nRoom Number: "<<Rno;
			cout<<"\nCustomer Name: ";
			puts(Name);
			cout<<"Charges per day: "<<Tariff;
			cout<<"\nNumber Days stayed By Customer: "<<NOD;
			cout<<"\nTotal Charges of Customer: "<<CALC();
		}
};
void main()
{
	clrscr();
	HOTEL H;
	H.Checkin();
	H.Dispinfo();
}