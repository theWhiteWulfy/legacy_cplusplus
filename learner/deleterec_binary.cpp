//program to delete a record from a binary file
#nclude<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
class  stu
{
	int  rollno;
	char name[25];
	char Class[4];
	float marks;
	char grade;
public:
	void getdata()
	{
		cout<<”Rollno:”;
cin>>rollno;
cout<<”Name:”;
cin>>name;
cout<<”Class:”;
cin>>Class;
cout<<”marks:”;
cin>>marks;
if(marks>=75)
grade = ‘A’;
else if(marks>=60)
grade = ‘B’;
else if(marks>=50)
grade = ‘C’;
else if(marks>=40)
grade = ‘D’;
else grade = ‘F’;}
void putdata()
{
	cout<<”rollno”<< rollno<<”\tname:”<<name<<”\nmarks:”<<marks<<”\tgrade:”<<grade<<endl;
}
int  getrno()
{
   return rollno;
}
}s1,stud;
      int main()
      {
		ifstream fio(“stu.dat”,ios::in);
		ofstream file(“temp.dat”,ios::out);
		int rno;
		char found = ‘f’,confirm = ‘n’;
cout<<”enter rollno of student whose record is to be deleted\n”;
cin>>rno;
while(!fio.eof())
{
fio.read((char*)&s1,sizeof(s1));
if(s1.getrno()==rno)
{
s1.putdata();
found =’t’;
cout<<”are you sure,  you want to delete this record (y/n)..”;
cin>>confirm;
if(confirm==’n’)
file.write((char*)&s1,sizeof(s1));
}

else
file.write((char*)&s1,sizeof(s1));
}
if(found ==’F’)
cout<<”record not found!!\n”;
fio.close();
file.close();
remove(“stu.dat”);
rename(“temp.dat”,”stu.dat”);
fio.open(“stu.dat”,ios::in);
cout<<”now the file  contains \n”;
while(!fio.eof())
{
fio.read((char*)&stud,sizeof(stud));
if(fio.eof())
break;
stud.putdata():
}
fio.close();
return 0;
}
