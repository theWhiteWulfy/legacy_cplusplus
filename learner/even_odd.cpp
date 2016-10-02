//CHECK ENTERED NO IS EVEN OR ODD

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int e;
char ch;
do
{
cout<<"Enter a no:"<<endl;
cin>>e;
if(e==0)
cout<<"\nThe no is neither even nor odd"<<endl;
if(e%2==0)
cout<<"\nThe no is even"<<endl;
else
cout<<"\nThe no is odd"<<endl;
cout<<"\nWant to see more(y/n)-"<<ch;
}
while(ch==y)
getch();
}
