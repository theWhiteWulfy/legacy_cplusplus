#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class frequency
{
	int list[6][2];
	public:
	frequency();
	void tossing();
	void results();

}

frequency::frequency()
{
for(int i=1;i<=6;i++)
	{
	list[i][0]=i;
	list[i][1]=0;
	}
}
void frequency::tossing()
{
int r,i;
randomize();
for(i=1;i<=100;i++)
{ r=random(6-1+1)+1;
  for(i=1;i<=100;i++)
  list[r-1][1]+=1;
}

void



void main()
{
clrscr();
randomize();
int i,r,lb,ub;
cout<<"enter the lower bound ";
cin>>lb;
cout<<"enter the upper bound ";
cin>>ub;
for(i=1;i<=100;i++)
{ r=random(ub-lb+1)+lb;
cout<<r<<"\t";
}

getch();
}