#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iomanip.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>

class state
{	char *statename;
	int size;
public:
	state()
	{	size=0;
		statename=new char[size+1];

	}
	state(char *s)
	{	size=strlen(s);
		statename=new char[size+1];
		strcpy(statename,s);
	}
	void display()
	{
		cout<<statename<<endl;
	}
	void replace(state&a, state&b)
	{
		size= a.size+b.size;
		delete statename;
		statename= new char[size+1];
		strcpy(statename, a.statename);
		strcat(statename, b.statename);

	}
};
void main()
{	system("cls");
	char *temp="figure twelve";
	state state1(temp), state2("figure nine"),state3 ("figure ten"), s1, s2;
	s1.replace(state1, state2);
	s2.replace(s1,state3);
	s1.display();
	s2.display();

	getch();

}

