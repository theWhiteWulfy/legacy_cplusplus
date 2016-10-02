//prg to find sq + cube acc to input

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,s;
cout<<"Enter a no"<<endl;
cin>>n;
if((n%2)==0)
s=n*n;
else
s=n*n*n;
cout<<"Rsult = "<<s;
getch();
}