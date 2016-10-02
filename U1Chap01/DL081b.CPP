// Filename: \\U1Chap01\DL081b.CPP
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int U = 10, V = 20;
	for (int I = 1; I <= 2; I++)
	{
		cout<<"[1]="<<U++<<"&"<<V-5<< endl;
		cout<<"[2]="<<++V<<"&"<<U+2<< endl;
	}
}
