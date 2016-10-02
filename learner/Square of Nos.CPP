//prg to read n,print n*n*n, n*n*n*n, n*n*n*n*n;

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,d,e;
cout<<"Enter a number :"<<endl;
cin>>a;
b=pow(a,2);
c=pow(a,3);
d=pow(a,4);
e=pow(a,5);
cout<<"Result = "<<b<<","<<c<<","<<d<<","<<e;
getch();
}