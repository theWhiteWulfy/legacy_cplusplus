//prg to find sqrtn if n>0 & n5 if n<0

#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
int n,r;
cout<<"Enter no"<<endl;
cin>>n;
if((n>0)&&(n%2==1))
r = sqrt (n);
else if((n<0))
r=pow(n,5);
cout<<"Result ="<<r;
getch();
}

