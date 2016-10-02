//prg to find a no is even or odd

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int e;
cout<<"Enter a no :"<<endl;
cin>>e;
if (e==0)
cout<<"The no is neither even or odd "<<endl;
if (e%2==0)
cout<<"The no is even"<<endl;
else
cout<<"The no is odd "<<endl;
getch();
}