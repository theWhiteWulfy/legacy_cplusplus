// Filename: \\U1Chap05\IM5bb.CPP
// Program to show the multiple inheritance
# include <iostream.h>
# include <stdio.h>
# include <conio.h>
class Person
{
	char name[20];
	char sex;
	int age;
	public :
		void read_p()
		{
			cout << "Enter the name ";
			gets(name);
			cout << "Enter sex ";
			cin >> sex;
			cout << "Enter age ";
			cin >> age;
		}
		void display_p()
		{
			cout << "\nName " << name;
			cout << "\nSex " << sex;
			cout << "\nAge " << age;
		}
};
class Hospital
{
	int bed_no;
	char illness[20];
	public:
		void read_h()
		{
			cout << "Enter the bed number ";
			cin >> bed_no;
			cout << "Enter the type of illness ";
			gets(illness);
		}
		void display_h()
		{
			cout << "\nBed Number " << bed_no;
			cout << "\nType of illness " << illness;
		}
};
struct date
{
	int dd;
	int mm;
	int yy;
};
class Patient : private Person, private Hospital
{
	date  dob;
	public:
		void read()
		{
			read_p();
			read_h();
			cout << "Enter the date ";
			cin >> dob.dd;
			cin >> dob.mm;
			cin >> dob.yy;
		}
		void display()
		{
			display_p();
			display_h();
			cout << "\nDate of Admission " << dob.dd << "/" << dob.mm << "/" << dob.yy;
		}
};
void main()
{
	Patient obj;
	clrscr();
	cout << "Enter the data of the patient\n";
	obj.read();
	cout << "\nThe data of the patient \n";
	obj.display();
}