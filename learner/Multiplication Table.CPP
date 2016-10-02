//prg for mult table till 10

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,a,v;
cout<<"Enter the no of which u want table"<<endl;
cin>>a;
cout<<"Enter the no upto which u want table"<<endl;
cin>>v;
for(i=1;i<=v;i++)
cout<<i<<"x"<<a<<"="<<a*i<<endl;
getch();
}