// Filename: \\U1Chap03\IM3bc.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class Library
{
	int Acc_No;
	char  Author[20];
	char  Title[20];
	char  Publisher[20];
	float Price;
	int   no_copies;
	public:
	void add()
	{
		cout << "Enter the Accession Number ";
		cin >> Acc_No;
		cout << "Enter the Author ";
		gets(Author);
		cout << "Enter the title ";
		gets(Title);
		cout << "Enter the Publisher ";
		gets(Publisher);
		cout << "Enter the Price of the Book ";
		cin >> Price;
		cout << "Enter Number of copies ";
		cin >> no_copies;
	}
	int search(int ano)
	{
		if (ano==Acc_No)
			return 1;
		else
			return 0;
	}
	void Display()
	{
		cout << "The Author Name is    : "<<Author<<endl;
		cout << "The Price of the Book : " <<Price<<endl;
	}
};
void main()
{
	Library	Lib[10];
	int ch,x,i;
	char ans='Y';
	i=0;
	while ( ans == 'Y')
	{
		clrscr();
		cout << " 1. To add \n";
		cout << " 2. For Search\n";
		cout << " 3. For Display\n";
		cout << " Enter Your choice ";
		cin >> ch;
		switch (ch)
		{
			case 1	:	Lib[i].add();
					i++;
					break;
			case 2	:       int f;
					cout << "Enter the accession number to be searched";
					cin >> x;
					for(int j=0;j<=i;j++)
					{
						f = Lib[j].search(x);
						if (f==1)
							break;
					}
					if (f == 1)
						cout << "Book Exists ";
					else
						cout << "Book Does not exists ";
					break;										case 3	:       for( j=0;j<i;j++)
					Lib[j].Display();
		}
		cout << "Do U want to continue ";
		cin >> ans;
	}
}