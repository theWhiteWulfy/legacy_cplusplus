// Filename: \\U1Chap05\IM5bd.CPP
#include <iostream.h>
#include<stdio.h>
class person
{
	private:
		int code;
		char name[10];
	public :
		void read()
		{
			cout << "Enter the code ";
			cin >> code;
			cout << "Enter the name ";
			gets(name);
		}
		void display()
		{
			cout << "\nThe code " << code;
			cout << "\nThe name ";
			puts(name);
		}
};
class account : public person
{
	float pay;
	public:
		void read_acc()
		{
			cout << "Enter the pay of account ";
			cin >> pay;
		}
		void display_acc()
		{
			cout << "\nThe pay of account " << pay;
		}
};
class admin : public person
{
	private :
		int experience;
	public:
		void read_adm()
		{
			read();
			cout << " Enter the administrative experience ";
			cin >> experience;
		}
		void display_adm()
		{
			display();
			cout << " \nThe administrative experience is : " << experience;
		}
};
class master : public account, public admin
{
	public :
		void read_master()
		{
			read_acc();
			read_adm();
		}
		void display_master()
		{
			display_acc();
			display_adm();
		}
};
void main()
{
	master obj;
	obj.read_master();
	obj.display_master();
}