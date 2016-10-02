//prg to find area of triangle

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,p,ar;
cout<<"Enter 3 sides :"<<endl;
cin>>a>>b>>c;
p=a+b+c;
ar=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<"Area :"<<ar;
getch();
}