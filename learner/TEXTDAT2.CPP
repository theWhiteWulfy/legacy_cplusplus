# include<iostream.h>
# include<conio.h>
# include<dos.h>
# include<stdio.h>
# include<stdlib.h>
# include<fstream.h>


void main()
{
	clrscr();
	long rno;
	fstream file;
	file.open("dattxt.txt",ios::in);
	int i,n;

	while(!file.eof())
	{
		file>>rno;
		cout<<rno;
		cout<<endl;
	}



	file.close();
	getch();
 }