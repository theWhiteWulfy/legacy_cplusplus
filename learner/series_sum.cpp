//x*x/2! + x*x*x*x/4!

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float f,a,b,j,s,x,i,n;
f=1;
s=x=0;
cout<<"Enter num & limit"<<endl;
cin>>x>>n;
for(i=1;i<=2*n;i=i+2)
{
for(j=1;j<=2*i;j++)
{
f=f*j;
}
s=(s+(pow(x,2*i)/f));
}
cout<<"Sum ="<<s;
getch();
}