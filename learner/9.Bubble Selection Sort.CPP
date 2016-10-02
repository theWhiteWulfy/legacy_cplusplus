//BUBBLE SELECTION SORT

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ch;
int i,j,x,k,z,l,m,n,o,p,a[50],small;
cout<<"Enter the choice 1:Selection  2:Bubble"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the limit "<<endl;
cin>>n;
cout<<endl;
cout<<"Enter the elements"<<endl;

for(i=0;i<n;i++)
   {
   cin>>a[i];
   cout<<endl;
   }

for(j=0;j<n;j++)
   {
   small=a[j];
   p=j;
 for(i=j;i<n;i++)
    {
    if(small>a[i])
    {
    small=a[i];
    p=i;
    }
    }
    for(k=p;k>j;k--)
   {
   a[k]=a[k-1];
   }
   a[j]=small;
   }
cout<<"Result"<<endl;
  for(z=0;z<n;z++)
  {
  cout<<a[z];
  cout<<endl;
  }
  break;

case 2:
cout<<"Enter the limit"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
  for(i=0;i<n;i++)
  cin>>a[i];
for(j=0;j<n;j++)
  {
  for(i=0;i<n-1;i++)
   {
   if (a[i]>a[i+1])
   {
   x=a[i+1];
   a[i+1]=a[i];
   a[i]=x;
   }
  }
  }
cout<<"Result"<<endl;
  for (i=0;i<n;i++)
   {
   cout<<a[i];
   cout<<endl;
   }
 break;

default:
cout<<"Wrong choice";
break;
}

getch();
}