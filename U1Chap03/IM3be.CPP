// Filename: \\U1Chap03\IM3be.CPP
# include <iostream.h>
# include <conio.h>
#include <stdio.h>
class student
{
	char name[20];
	int roll;
	float marks[5];
	public :
	void enter()
	{
		cout << "Enter the name ";
		gets(name);
		cout << "Enter the Roll Number ";
		cin >> roll;
		cout << "Enter the marks in 5 subjects ";
		for (int i=0;i<5;i++)
			cin >> marks[i];
	}
	void Assign()
	{
		int avg;
		avg  = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
		if (avg >= 96 )
			cout << "Computer Science ";
		if (avg <96 && avg >=91)
			cout << "Eletronics ";
		if (avg <91 && avg >=86)
			cout << "Mechanical";
		if ( avg <86 && avg >= 81)
			cout << "Electrical ";
		if (avg <81 && avg >=76)
			cout << "Chemical";
		if (avg <76 && avg >=71)
			cout << "Civil";
	}
};
void main()
{
	student stud;
	stud.enter();
	stud.Assign();
}