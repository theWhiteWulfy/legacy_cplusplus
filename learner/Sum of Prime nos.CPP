
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int p=0,i,n;
cout<<"Enter the no :"<<endl;
cin>>n;
for(i=2;i<=(n/2);i++)
{
if(n%i==0)
p=1;
}
if(p==0)
cout<<"Prime";
else if (p==1)
cout<<"Not Prime";
getch();
}