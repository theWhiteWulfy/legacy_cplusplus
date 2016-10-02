//Read val x,y,z & display value of p = (w+x/0/(y-z)

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int w,x,y,z;
float p;
cout<<"Enter 4 numbers"<<endl;
cin>>x>>y>>z>>w;
p=(w+x)/(y-z);
cout<<"(w+x)/(y-z) = "<<p;
getch();
}