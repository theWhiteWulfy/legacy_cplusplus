// Filename: \\U1Chap06\AI076b.CPP
// The complete program with function is :
# include <fstream.h>
# include <conio.h>
# include <stdio.h>
# include <string.h>
struct Sports
{
	char Event[20];
	char Participant[10][30];
};
Sports S;
void create()
{
	fstream afile;
	afile.open("SPORTS.DAT", ios::out);
	int n;
	cout<< "Enter how many records ";
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cout << "Enter the Event Name ";
		gets(S.Event);
		for(int j=0;j<10;j++)
		{
			cout << "Enter the Participants ";
			gets(S.Participant[j]);
		}
		afile.write((char *) &S, sizeof(Sports));
	}
	afile.close();
}
void copy()
{
	fstream afile, bfile;
	afile.open("SPORTS.DAT",ios::in);
	bfile.open("ATHLETIC.DAT",ios ::out);
	while(afile)
	{
		afile.read((char *)&S, sizeof(Sports));
		if (strcmp(S.Event,"Athletics")==0)
		{
			cout << " Record found ";
			bfile.write((char *)&S,sizeof(Sports));
		}
	}
	afile.close();
	bfile.close();
}
void Display()
{
	fstream bfile;
	bfile.open("ATHLETIC.DAT",ios::in);
	while(bfile)
	{
		bfile.read((char *)&S, sizeof(Sports));
		for(int j=0;j<10;j++)
		cout << S.Participant[j];
	}
	bfile.close();
}
main()
{
	clrscr();
	create();
	copy();
	cout << "Content of the copied file \n";
	Display();
	getch();
}