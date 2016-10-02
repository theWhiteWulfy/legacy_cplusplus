//prg to calc elec bill using if

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float r,a,u;
cout<<"Enter Your Rn + Elec Bill"<<endl;
cin>>r>>u;
if(a<=100)
a=u*.40+50;
else
if((u>100) && (u<=300))
a=100*.40 + (u-100)*.50 + 50;
else
a=(100*.4 + 200*.50 + (u-300)*.60 + 50);
cout<<"Bill = "<<a;
getch();
}