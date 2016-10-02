// Filename: \\U1Chap03\IM3ae.CPP
#include <iostream.h>
#include <conio.h>
#include <string.h>
class Student
{
	int age;
	char name[25];
	public :
		Student(char *sname, int a)
		{
			strcpy(name, sname);
			age = a;
		}
		void display()
		{
			cout << "age = " << age;
			cout << "Name = " << name;
		}
};
Student stud1("Rohit", 17);
void main()
{
	clrscr();
	stud1.display();
}