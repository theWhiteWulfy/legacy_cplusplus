// Filename: \\U1Chap06\DL086a.CPP
#include<fstream.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class Phonlist {
	char Name[20];
	char Address[30];
	char AreaCode[5];
	char PhoneNo[15];
	public:
		void Register();
		void Show();
		int CheckCode(char AC[]) {
			return strcmp(AreaCode, AC);
		}
};
void Phonlist::Register()
{
	cout << "\nEnter name ";
	gets(Name);
	cout << "Enter address ";
	gets(Address);
	cout << "Enter Area code ";
	gets(AreaCode);
	cout << "Enter Phone No ";
	gets(PhoneNo);
}
void Phonlist::Show()
{
	cout << "\nName " << Name << endl;
	cout << "Address " << Address << endl;
	cout << "Area code " << AreaCode << endl;
	cout << "Phone No " << PhoneNo << endl;
}
void Enter_Data()
{
	Phonlist PH;
	fstream afile;
	afile.open("PHONE.DAT", ios::app|ios::out|ios::binary); // Creates the data file
	int n, i;
	clrscr();
	cout << "Enter how many Phone data you want to enter : ";
	cin >> n;
	for (i=0; i<n; i++)
	{
		cout << "Enter data for Phone : " << i+1;
		PH.Register();
		afile.write((char *)&PH, sizeof(Phonlist));
	}
	afile.close();
}

void TRANSFER()
{
	fstream afile, bfile;
	Phonlist PH;
	int ctr;
	afile.open("PHONE.DAT",ios::in);
	bfile.open("PHONBACK.DAT",ios ::out);
	while(afile)
	{
		afile.read((char *)&PH, sizeof(PH));
		ctr = PH.CheckCode("DEL");
		if (ctr == 0)
		{
			cout << "Record found ";
			bfile.write((char *)&PH,sizeof(PH));
		}
	}
	afile.close();
	bfile.close();
}
void main()
{
	Enter_Data();
	TRANSFER();
}