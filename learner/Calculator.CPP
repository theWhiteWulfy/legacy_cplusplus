//caclulator non gui
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,s,op;
clrscr();
cout<<"\t\t\t\tCALCULATOR\n\t\t\tAll Rights Reserved\a\n";
cout<<"\t\tIllegal Copying is punishable\a\nEnter Number A\a :";
cin>>a;
cout<<"\nEnter Number B\a :";
cin>>b;
cout<<endl<<"\t\t1.Addition\n\t\t2.Subtraction\n\t\t";
cout<<"3.Division(Whole Numbers only)\n\t\t4.Multiplication\n\t\t";
cout<<"5.Square of A\n\t\t6.Square of B\n\t\t";
cout<<"7.'A'square - 'B'square\n\t\t8.'A'square + 'B'square\n\t\t";
cout<<"9.'A'square * 'B'square\n\t\t10.'A'square / 'B'square(whole numbers only";
cout<<"\n\t\t11.'A'cube\n\t\t12.'B'cube";
cout<<endl<<" Enter Choice\a :";
cin>>op;
switch(op)
{
case 1:s=a+b;
       cout<<"Sum = \a"<<s;
       break;
case 2:s=a-b;
       cout<<"Difference =\a "<<s;
       break;
       case 3:s=a/b;
       cout<<"Quotient =\a "<<s;
       break;
case 4:s=a*b;
       cout<<"Product =\a "<<s;
       break;
case 5:s=a*a;
       cout<<"Square =\a "<<s;
       break;
case 6:s=b*b;
       cout<<"Square =\a "<<s;
       break;
case 7:s=(a*a)-(b*b);
       cout<<"Answer =\a "<<s;
       break;
case 8:s=(a*a)+(b*b);
       cout<<"Answer =\a "<<s;
       break;
case 9:s=(a*a)*(b*b);
       cout<<"Answer =\a "<<s;
       break;
case 10:s=(a*a)/(b*b);
       cout<<"Answer =\a "<<s;
       break;
case 11:s=a*a*a;
       cout<<"Answer =\a "<<s;
       break;
case 12:s=b*b*b;
       cout<<"Answer =\a "<<s;
       break;
default:cout<<"Invalid\a Choice\a";
}
getch();
}