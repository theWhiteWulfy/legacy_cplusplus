//prg to find sum of even no <100

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,s=0;
for(i=2;i<=100;i=i+2)
s=s+i;
cout<<"Sum ="<<s;
getch();
}