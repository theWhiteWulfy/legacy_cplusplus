//TO CONVERT DECIMAL TO BINARY OR BINARY TO DECIMAL

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,g,h,s=0,i=0,d,b,ch;
cout<<endl<<"Enter the choice:"<<endl
<<"1:Binary to Decimal"<<endl
<<"2:Decimal to Binary"<<endl;
cin>>ch;
switch(ch)
{case 1:
cout<<"\n\nEnter the Binary Digit"<<endl;
cin>>b;
while(b>0)
{a=b%10;
s=s+a*(pow(2,i));
i=i+1;
b=b/10;
}
cout<<"Answer ="<<s<<endl;
break;

case 2:
cout<<"\n\nEnter the Decimal"<<endl;
cin>>d;
while(d>0)
{a=d%2;
a=a*pow(10,i);
s=s+a;
i=i+1;
d=d/2;
}
cout<<"Answer ="<<s<<endl;
break;

default:
cout<<"Wrong choice"<<endl;
break;
}
getch();
}
