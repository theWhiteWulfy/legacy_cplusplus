// Filename: \\U1Chap06\IM6cc.CPP
// Program to create the file of an employee and read the file
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
struct employee	// Structure of an employee record
{
	int empno;
	float wrate;
	int noh;
	float wage;
};
employee emp;
void main()
{
	clrscr();
	void append();
	void display();
 	append();
 	display();
}
// Function to add record in the file
void append()
{	
	ofstream  tfile;
	tfile.open("emp.dat");
	int n,i;
	cout<< "Enter how many employees ";
	cin>>n;
	for (i =0; i<n ;i++)
	{
		cout<< "\n Enter the number of employee ";
		cin>>emp.empno;
		cout<< "\n Enter the work rate ";
		cin>>emp.wrate;
		cout<< "\n Enter no. of hours worked ";
		cin>>emp.noh;
       		emp.wage = emp.wrate * emp.noh;
		tfile.write((char *)& emp,sizeof(emp));
	}
}
// Function to display the record from file
void display()
{
	ifstream   tfile;
	tfile.open("emp.dat");
	cout<< "\n \t\tLIST OF  EMPLOYEES \n";
	cout<< "EMPNO	WAGE RATE	NO OF HOURS    WAGE \n";
	while(tfile)
	{
		tfile.read((char *)&emp , sizeof(emp));
		if(!tfile)
			break;
		cout<<setw(4)<<emp.empno<<setw(7)<<emp.wrate<<setw(7)
	     		<<emp.noh<<setw(8)<<emp.wage<<endl;
	}
}	