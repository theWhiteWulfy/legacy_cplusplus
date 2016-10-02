// Filename: \\U1Chap05\IM5be.CPP
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class person
{
	int id;
	char name[30];
	char sex;
	public :
	void enter()
	{
		cout << "Enter the identification id ";
		cin >> id;
		cout << " Enter Name ";
		gets(name);
		cout << "Enter Sex ";
		cin >> sex;
	}
	void show()
	{
		cout << "\n Identification Number : "<<id;
		cout << "\n NAme		  : "<<name;
		cout << "\n Sex			  : "<<sex;
	}
};
class student : public person
{
	char clas[10];
	char subject[20];
	public :
	void Senter()
	{
		cout << "Enter the class of student ";
		gets(clas);
		cout << " Enter subject of specialization ";
		gets(subject);
	}
	void Sshow()
	{
		cout << "\n Class		  : "<<clas;
		cout << "\n Subject		  : "<<subject;
	}
};
class employee : public person
{
	char job[10];
	int salary;
	public:
	void Eenter()
	{
		cout << "Enter the work of employee ";
		gets(job);
		cout << " Enter the salary of employee ";
		cin >> salary;
	}
	void Eshow()
	{
		cout << "\n Job			  : "<<job;
		cout << "\n Salary		  : "<<salary;
	}
};
main()
{
	employee emp[10];
	student stud[10];
	int i;
	cout << "Enter the records of 10 students ";
	for(i=0;i<10;i++)
	{
		stud[i].enter();
		stud[i].Senter();
	}
	cout << "Enter the records of 10 employee ";
	for (i=0;i<10;i++)
	{
		emp[i].enter();
		emp[i].Eenter();
	}
	cout << "	Students Record	\n ";
	for(i=0;i<10;i++)
	{
		stud[i].show();
		stud[i].Sshow();
	}
	cout << "	Employees Record	\n ";
	for(i=0;i<10;i++)
	{
		emp[i].show();
		emp[i].Eshow();
	}
}
