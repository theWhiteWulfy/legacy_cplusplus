//prg to ask your height & convert into feet & inches

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float h,i,f;
cout<<"Enter your heught in cms :"<<endl;
cin>>h;
f=h/30.48;
cout<<"Height in feets :"<<f<<endl;
i=h/2.54;
cout<<"Height in inch :"<<i<<endl;
getch();
}