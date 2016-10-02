//prg for sum of series 2*2 + 2*2+4*4 + ...... n*n

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int j,n,s=0,s1=0,i;
cout<<"Enter the limit :";
cin>>n;
  for(i=1;i<=n;i++)
  {
   for(j=2;j<=2*i;j=j+2)
   {
   s=s+j*j;
   }
  s1=s1+s;
  s=0;
  }
cout<<"Sum of series is :"<<s1;
getch();
}
