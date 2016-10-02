# include<iostream.h>
# include<conio.h>
# include<dos.h>
# include<stdio.h>
# include<stdlib.h>
# include<fstream.h>


void main()
{
	clrscr();
	long long rno;
	fstream file;
	file.open("dattxt.txt",ios::out);
	int i,n;
	cout<<"Enter noof rows ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		cin>>rno;
		file<<rno<<endl;
	}
	file.close();
 }