//lar & small

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int b,s,g=0,l=35000,n,i,a;
cout<<"Enter how many nos u want to enter"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a;
if(a>g)
g=a;
if(a<l)
l=a;
}
cout<<"Big ="<<g;
cout<<"Small ="<<l;
getch();
}


