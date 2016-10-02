//prg to read temp in celsius & display in F

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float k,c;
cout<<"Enter the temp in Celsius :";
cin>>c;
k=(9/5)*c+32;
cout<<"Temperature in Farenheit = "<<k;
getch();
}