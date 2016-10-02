

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n=0,i,l,j,k=2,a=0;
cout<<"Enter Limit"<<endl;
cin>>l;
while(n<l)
{
j=2;
a=0;
while(j<=k/2)
{
if(k%j==0)
a=a+1;
j++;
}
if(a==0)
{
cout<<endl<<k<<endl;
}
else
l++;
n++;
k++;
}
getch();
}
