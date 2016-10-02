// Filename: \\U1Chap05\IM5bc.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class staff
{
	int code;
	char name[30];
	public :
	void input()
	{
		cout << "Enter the code ";
		cin >> code;
		cout << "Enter the name ";
		gets(name);
	}
	void display()
	{
		cout << "\nCode : "<<code;
		cout << "\nName : "<<name;
	}
};
class teacher : public staff
{
	char subject[20];
	char publication[20];
	public :
	void entry()
	{
		cout << "Enter subject ";
		gets(subject);
		cout << "Enter publication ";
		gets(publication);
	}
	void show()
	{
		cout << "\nSubject : "<<subject;
		cout << "\nPublication : "<<publication;
	}
};
class officer : public staff
{
	int grade;
	public:
		void OInput()
		{
			cout << "Enter the grade ";
			cin >> grade;
		}
		void ODisplay()
		{
			cout << "\nGrade : "<<grade;
		}
};
void main()
{
	teacher T;
	officer O;
	cout << "Enter the details of the teacher \n ";
	T.input();
	T.entry();
	cout << "Enter the details of the officer \n";
	O.input();
	O.OInput();
	cout << "Teacher Details \n ";
	T.display();
	T.show();
	cout << "\nOfficer Details \n ";
	O.display();
	O.ODisplay();
}