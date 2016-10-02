//prg to n odd nos in desc order

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
cout<<"Enter the no :"<<endl;
cin>>n;
if(n%2==0)
n=n-1;
for(i=n;i>=1;i=i-2)
cout<<i<<endl;
getch();
}
