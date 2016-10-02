// Filename: \\U1Chap03\DL063a.CPP
#include<iostream.h>
#include <conio.h>
#include <stdio.h>
class ADMISSION
{
	int AD_NO;
	char NAME[20];
	char CLASS;
	float FEES;
	public:
		void Read_Data()
		{
			do
			{
				cout << "Enter admission no. : ";
				cin >> AD_NO;
			}while (AD_NO<10 || AD_NO>2000);
			cout << "Enter name : ";
			gets(NAME);
			cout << "Enter class : ";
			cin >> CLASS;
			cout << "Enter fees : ";
			cin >> FEES;
		}
		void Display()
		{
			cout << "Admission no. : " << AD_NO << endl;
			cout << "Name : " << NAME << endl;
			cout << "Class : " << CLASS << endl;
			cout << "Fees : " << FEES << endl;
		}
		void Draw_Nos();
};
void main()
{
	clrscr();
	ADMISSION adm;
	adm.Read_Data();
	adm.Display();
}
