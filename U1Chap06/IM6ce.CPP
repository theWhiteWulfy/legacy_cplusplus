// Filename: \\U1Chap06\IM6ce.CPP
// Program to read the file containing name of the states and respective chief ministers
// and search the file for respective states and chief ministers
# include <fstream.h>
# include <stdlib.h>
# include <conio.h>
# include <string.h>
class LIST
{
	char States[20], CM[20];
	public:
		void SHOWIT( ){
			cout << "\n\t";
			cout<< " State  : "<< States << "\n\t Chief Minister : " << CM <<endl;}
		int s1(char t_state[20])
		{
			if (strcmp(States, t_state)==0)
			{
				SHOWIT();
				return (1);
			}
		}
		int s2(char t_cop[20])
		{
			if (strcmp(CM, t_cop)==0)
			{
				SHOWIT();
				return (1);
			}
		}
};
// Function to read the object of class from the binary file
void read_file()
{
	ifstream afile;
	afile.open("LIST.dat", ios::in | ios :: binary);
	if (!afile)
	{
		cout << "\n File does not exist ";
		exit(1);
	}
	LIST obj;
	while(afile)
	{
		afile.read((char *) &obj, sizeof(obj));
		obj.SHOWIT();
	}
	getch();
	afile.close();
}
// Function to search for the state
void search1()
{
	ifstream afile;
	char t_state[20];
	afile.open("LIST.dat", ios::in | ios :: binary);
	cout << "\n\tEnter Country name ";
	cin >> t_state;
	if (!afile)
	{
		cout << "\nFile does not exist ";
		exit(1);
	}
	LIST obj;
	int flag = 0;
	while(afile)
	{
		flag = 0;
		afile.read((char *) &obj, sizeof(obj));
		flag = obj.s1(t_state);
		if (flag == 1)
			break;
	}
	if (flag != 1)
		cout << "\n\tState does not exist";
	getch();
	afile.close();
}
// Function to search for the CM
void search2()
{
	ifstream afile;
	char t_CM[20];
	afile.open("LIST.dat", ios::in | ios :: binary);
	cout << "\n\t Enter chief minister name ";
	cin >> t_CM;
	if (!afile)
	{
		cout << "\n File does not exist ";
		exit(1);
	}
	LIST obj;
	int flag = 0;
	while(afile)
	{
		flag = 0;
		afile.read((char *) &obj, sizeof(obj));
		flag = obj.s2(t_CM);
		if (flag == 1)
			break;
	}
	if (flag != 1)
		cout << "\n\tChief minister does not exist";
	getch();
	afile.close();
}
void main()
{
	clrscr();
	int n;
	int ch;
	do
	{
		clrscr();
		cout << "\n\t  1. Display all";
		cout << "\n\t  2. Search by State ";
		cout << "\n\t  3. Search by CM";
		cout << "\n\t  4.  End";
		cout << "\n\t   Enter your choice ";
		cin >> ch;
		switch(ch)
		{
			case 1 : 	read_file();
				break;
			case 2 :	search1();
				break;
			case 3 :	search2();
				break;
			case 4 :	exit(0);
		}
	}while(ch!=4);
}
