//program using friend function

#include<iostream.h>
#include<conio.h>
class Cmplx1
{
int real,imagin;
public :
void get()
{
cout<<"\n\n\tENTER THE REAL PART : ";
cin>>real;
cout<<"\n\n\tENTER THE IMAGINARY PART : ";
cin>>imagin;
}
friend void sum(Cmplx1,Cmplx1);
};
void sum(Cmplx1 c1,Cmplx1 c2)
{
cout<<"\n\t\tRESULT : ";
cout<<"\n\n\t["<<c1.real<<" + i "<<c1.imagin;
cout<<" ] + [ "<<c2.real<<" + i "<<c2.imagin;
cout<<" ] = "<<c1.real+c2.real<<" + i "<<c1.imagin+c2.imagin;
}
void main()
{
Cmplx1 op1,op2;
clrscr();
cout<<"\n\n\tADDITION OF TWO COMPLEX NUMBERS USING FRIEND FUNCTIONS\n\n";
cout<<"\n\tINPUT\n\n\t\tOPERAND 1";
op1.get();
cout<<"\n\n\t\tOPERAND 2";
op2.get();
sum(op1,op2);
getch();
}