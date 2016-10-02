// Filename: \\U1Chap06\IM6cb.CPP
# include <fstream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct telrec
{
	char name[20];
	int tno;
} tele;
// Function to append the records in file
void append()
{
	ofstream  tfile;
	tfile.open("tele.dat", ios :: app);
	int  n,i;
	cout<< "Enter how many customers ";
	cin>>n;
	for (i =0; i<n ;i++)
	{
		cout<<"\n Enter the telephone number ";
		cin>>tele.tno;
		cout<<"\n Enter the name ";
		cin>>tele.name;
		tfile.write((char *)& tele,sizeof(tele));
	}
}
// Function to search a record in the file
void display()
{
	ifstream tfile;
	tfile.open("tele.dat",ios :: binary);
	int no,flag;
	flag = 0;
	cout<< "\n Enter telephone number to be searched ";
	cin>>no;
	while(tfile)
	{
		tfile.read((char *)&tele , sizeof(tele));
		if(!tfile)
			break;
		if (tele.tno == no)
		{
			cout<< "\n Name "<<tele.name;
			cout<< "\n Telephone No "<<tele.tno;
			flag = 1;
		}
	}
	if (flag == 0)
		cout<< "\n Record does not exist ";
}
void main()
{
	append();
	display();
}
