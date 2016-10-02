#include<iostream.h>
#include<conio.h>
#include<fstream.h>
Class  stu
{
	int  rollno;
	char  name[25];
	char  Class[4];
	float  marks;
	char  grade;
public:
	void  getdata()
{
	cout<<”Rollno:”;
	cin>>rollno;
	cout<<”Name:”;
	cin>>name;
	cout<<”Class:”;
	cin>>Class;
	cout<<”marks:”;
	cin>>marks
	if(marks>=75)
	grade = ‘A’;
	else if(marks>=60)
	grade = ‘B’;
	else if(marks>=50)
	grade = ‘C’;
	else if(marks>=40)
	grade = ‘D’;
	else grade = ‘F’;
}


void putdata()
{
cout<<name<<”rollno”<<rollno<<”has”<<marks<<”% marks and”<<grade<<”grade”<<endl;
}
int getrno()
{
	return rollno;
}
}s1;
    int main()
{
   	 ofstream fo(“stu.dat”,ios::app);
	char ans = ‘Y’;
	while(ans = =’y’)
	{
		s1.getdata();
		fo.write((char*)&s1,sizeof(s1));
		cout<<”Record added to file<<endl;
		cout<<”want to enter more records?(y/n)..”;
		cin>>ans;
          }
	fo.close();
	return 0;
}
	





