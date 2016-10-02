// Filename: \\U1Chap05\IM5ba.CPP
// Program to display the data of the employee and the data of the managers
# include <iostream.h>
# include <stdio.h>
# include <conio.h>
class Employee
{
	int emp_no;
	char emp_name[20];
	char emp_dept[10];
	char emp_add[20];
	public:
		void read();
		void display();
};
class Manager: public Employee
{
	int no_of_emp;
	public:
		void read_man()
		{
			read();
			cout << "\nEnter the number of employee working under manager ";
			cin >> no_of_emp;
		}
		void display_man()
		{
			display();
			cout << "\nNumber of Employee " << no_of_emp;
		}
};
void Employee::read()
{
	cout << "\n\nEnter the employee number ";
	cin >> emp_no;
	cout << "\nEnter the employee name ";
	gets(emp_name);
	cout << "\nEnter the employee address ";
	gets(emp_add);
	cout << "\nEnter the employee department ";
	gets(emp_dept);
}
void Employee::display()
{
	cout << "\nEmployee number " << emp_no;
	cout << "\nEmployee name " << emp_name;
	cout << "\nEmployee address " << emp_add;
	cout << "\nEmployee department " << emp_dept;
}
void main()
{
	Employee emp;
	Manager man;
	clrscr();
	cout << "\nEnter the data of the employee\n";
	emp.read();
	cout << "The data of the employee is \n";
	emp.display();
	cout << "\nEnter the data of the manager";
	man.read_man();
	cout << "\nThe data of the manager \n";
	man.display_man();
	getch();
}
