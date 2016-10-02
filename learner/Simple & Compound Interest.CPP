//prg to compute SI and CI

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float t,r,a,c,s,ci;
cout<<"Enter Principle :"<<endl;
cin>>a;
cout<<"Enter Time Period :"<<endl;
cin>>t;
cout<<"Enter Rate of Interest :"<<endl;
cin>>r;
s=(a*r*t)/100;
c= pow ((((r/100)+1)*a),t);
ci = (c-a);
cout<<"Simple Interest : "<<s<<"Compound Interest : "<<ci<<endl;
getch();
}


