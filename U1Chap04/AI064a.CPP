// Filename: \\U1Chap04\AI064a.CPP
#include<iostream.h>
#include<string.h>
class student
{
	char *name;
	int l;
	public:
		student() {l=0; name=new char[l+1]; }
		student(char *s)
		{
			l = strlen(s); name = new char[l+1];
			strcpy(name, s);
		}
		void display() { cout << name << endl;}
		void manipulate(student &a, student &b)
		{
			l = a.l + b.l;
			delete name;
			name = new char[l+1];
			strcpy(name, a.name);
			strcat(name, b.name);
		}
};
void main()
{
	char *temp = "Jack";
	student name1(temp), name2("Jill"), name3("John"), S1, S2;
	S1.manipulate(name1, name2);
	S2.manipulate(S1, name3);
	S1.display();
	S2.display();
}