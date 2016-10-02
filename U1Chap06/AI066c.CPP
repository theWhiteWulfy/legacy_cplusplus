// Filename: \\U1Chap06\AI066c.CPP
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
struct PRODUCT
{
	char Product_Code[10];
	char Product_Description[10];
	int Stock;
};
// Function to update PRODUCT data
void update()
{
	fstream fs;
	PRODUCT pr;
	char P_Code[10];
	cout << "\nEnter the product code : ";
	gets(P_Code);
	fs.open("PRODUCT.DAT", ios::binary|ios::in|ios::out);
	while(fs.read((char *)&pr, sizeof(PRODUCT)))
	{
		if(strcmp(pr.Product_Code, P_Code) == 0)
		{
			cout << "\nEnter the new stock : ";
			cin >> pr.Stock;
			fs.seekp(fs.tellg() - sizeof(pr));
			// OR fs.seekp(fs.teelg() - sizeof(pr), ios::beg);
			// OR fs.seekp(- sizeof(pr), ios::curr);
			fs.write((char *)&pr, sizeof(PRODUCT));
		}
	}
	fs.close();
}
// Function to add new colony data
void append()
{
	fstream fs;
	PRODUCT pr;
	char opt = 'y';
	clrscr();
	fs.open("PRODUCT.DAT", ios::binary|ios::in|ios::app);
	cout << "\nProduct data entry\n";
	do
	{
		cout << "Enter product code => ";
		gets(pr.Product_Code);
		cout << "Enter product description => ";
		gets(pr.Product_Description);
		cout << "Enter the stock => ";
		cin >> pr.Stock;
		fs.write((char *)&pr, sizeof(PRODUCT));
		cout << "Do you want to continue... ";
		cin >> opt;
	} while(opt == 'y'|| opt=='Y');
	fs.close();
}
// Function to display product data
void display()
{
	clrscr();
	fstream fs;
	PRODUCT pr;
	cout << "The output of PRODUCT.dat data file :\n";
	fs.open("PRODUCT.dat", ios::binary|ios::nocreate|ios::in);
	fs.read((char *) &pr, sizeof(PRODUCT));
	while (fs)
	{
		cout << pr.Product_Code << '\t' << pr.Product_Description << '\t' << pr.Stock << endl;
		fs.read((char *) &pr, sizeof(PRODUCT));
	}
	fs.close();
	getch();
}
void main()
{
	clrscr();
	int ch;
	char opt;
	do
	{
		cout << "\n Main Menu ";
		cout << "\n1. Add Record ";
		cout << "\n2. Display Record ";
		cout << "\n3. Update Record ";
		cout << "\n4. Exit";
		cout <<"\nEnter your choice : ";
		cin >> ch;
		switch(ch)
		{
			case 1 :
				append();
				break;
			case 2:
				display();
				break;
			case 3:
				update();
				break;
			case 4:
				break;
		}
	} while ((ch >= 1) && (ch <= 3));
}