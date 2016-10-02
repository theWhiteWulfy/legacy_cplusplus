//prg to finjd the no of +,- ve nos

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int p=0,nn=0,i,n,a;
cout<<"Enter teh limit :"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a;
if(a>0)
p=p+1;
else
nn=nn+1;
}
cout<<"No of +ve ="<<p;
cout<<"No of negative ="<<nn;
getch();
}

