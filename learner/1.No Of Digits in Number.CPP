//No of Digits in   a number

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x=0,n;
cout<<"Enter the number :";
cin>>n;
while(n>0)
{
n=n/10;
x=x+1;
}
cout<<"The no of digits are :"<<x;
getch();
}



