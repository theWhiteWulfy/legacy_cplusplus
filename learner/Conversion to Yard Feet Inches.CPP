//prg to convert given inches to yard , feet & inches

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,y,f,in;
cout<<"Enter the value in inches :"<<endl;
cin>>i;
y=(i/36);
f= ((i%36)/12);
in = ((i%36)%12);
cout<<y<<" Yard & "<<f<<" Feets "<<in<< " Inches  ";
getch();
}