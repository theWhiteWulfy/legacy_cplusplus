//RANDOM NUMBER GAME


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
char op;
for(int o=1;;o++)
{
clrscr();
randomize();
cout<<"\t\t\a.\a.\a.GAME\a.\a.\a."<<endl;
int a[2000],b[2000];
char*t[2]={"Heads","Tails"};
char*name;
int mr=0,yr=0,x,y,c,d,e,f,g,h,i,j,z;
cout<<"Enter your name:- ";
gets(name);
cout<<endl<<"TOSS"<<endl<<"Enter your choice:-"<<endl<<"0.Heads or"<<endl<<"1.Tails"<<endl;
cin>>c;
{
if(c==0)
{
g=random(2);
cout<<"It's "<<t[g]<<endl;
if(g==c)
{
cout<<"\aYou win the toss"<<endl;
z=0;
}
else
{
cout<<"\aI win the toss"<<endl;
z=1;
}
}
else if(c==1)
{
g=random(2);
cout<<"It's "<<t[g]<<endl;
if(g==c)
{
cout<<"\aYou win the toss"<<endl;
z=0;
}
else
{
cout<<"\aI win the toss"<<endl;
z=1;
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
if(z==0)
{
cout<<"Enter your choice"<<endl<<"1.Bat first or"<<endl<<"2.Bowl first"<<endl;
cin>>y;
if(y==1)
{
for(i=0;;i++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>a[i];
if(a[i]>=0 && a[i]<=6)
{
d=random(7);
cout<<"I entered "<<d<<endl;
if(d!=a[i])
{
yr=yr+a[i];
cout<<"Your total runs:- "<<yr<<endl;
}
else
{
cout<<"\aYOU ARE OUT!!!"<<endl<<"You total runs:- "<<yr<<endl<<"I need "<<yr+1<<" runs to win"<<endl;
break;
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
for(j=0;;j++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>b[j];
if(b[j]>=0 && b[j]<=6)
{
e=random(7);
cout<<"I entered "<<e<<endl;
if(e!=b[j])
{
mr=mr+e;
cout<<"My total runs:- "<<mr<<endl;
if(mr>yr)
{
cout<<"\aI WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<<mr<<endl;
break;
}
}
else
{
cout<<"\aI AM OUT!!!"<<endl;
if(yr>mr)
{
cout<<"\aYOU WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<<mr<<endl;
break;
}
else
{
cout<<"\aMATCH DRAW!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<<mr<<endl;
break;
}
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
}
else if(y==2)
{
for(int j=0;;j++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>b[j];
if(b[j]>=0 && b[j]<=6)
{
e=random(7);
cout<<"I entered "<<e<<endl;
if(e!=b[j])
{
mr=mr+e;
cout<<"My total runs:- "<<mr<<endl;
}
else
{
cout<<"\aI AM OUT!!!"<<endl<<"My total runs:- "<<mr<<endl<<"You need "<<mr+1<<" runs to win"<<endl;
break;
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
for(i=0;;i++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>a[i];
if(a[i]>=0 && a[i]<=6)
{
d=random(7);
cout<<"I entered "<<d<<endl;
if(d!=a[i])
{
yr=yr+a[i];
cout<<"Your total runs:- "<<yr<<endl;
if(yr>mr)
{
cout<<"\aYOU WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<"COMPUTER SCORE - "<<mr<<endl<<name<<" - RUNS SCORED - "<<yr<<endl;
break;
}
}
else
{
cout<<"\aYOU ARE OUT!!!"<<endl;
if(mr>yr)
{
cout<<"\aI WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<"COMPUTER SCORE - "<<mr<<endl<<name<<" - RUNS SCORED - "<<yr<<endl;
break;
}
else
{
cout<<"\aMATCH DRAW!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<<mr<<endl;
break;
}
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
else
{
f=random(2);
if(f==0)
{
cout<<"I choose to bowl"<<endl;
for(i=0;;i++)
{
cout<<"Enter a number between 0 to 6"<<endl;
cin>>a[i];
if(a[i]>=0 && a[i]<=6)
{
d=random(7);
cout<<"I entered "<<d<<endl;
if(d!=a[i])
{
yr=yr+a[i];
cout<<"Your total runs:- "<<yr<<endl;
}
else
{
cout<<"\aYOU ARE OUT!!!"<<endl<<"Your total runs:- "<<yr<<endl<<"I need "<<yr+1<<" runs to win"<<endl;
break;
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
for(j=0;;j++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>b[j];
if(b[j]>=0 && b[j]<=6)
{
e=random(7);
cout<<"I entered "<<e<<endl;
if(e!=b[j])
{
mr=mr+e;
cout<<"My total runs:- "<<mr<<endl;
if(mr>yr)
{
cout<<"\aI WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<<mr<<endl;
break;
}
}
else
{
cout<<"\aI AM OUT!!!"<<endl;
if(yr>mr)
{
cout<<"\aYOU WIN"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<< mr<<endl;
break;
}
else
{
cout<<"\aMATCH DRAW!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<" - RUNS SCORED - "<<yr<<endl<<"COMPUTER SCORE - "<<mr<<endl;
break;
}
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
}
else
{
cout<<"I choose to Bat"<<endl;
for(j=0;;j++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>b[j];
if(b[j]>=0 &&b[j]<=6)
{
e=random(7);
cout<<"I entered "<<e<<endl;
if(e!=b[j])
{
mr=mr+e;
cout<<"My total runs:- "<<mr<<endl;
}
else
{
cout<<"\aI AM OUT!!!"<<endl<<"My total runs:- "<<mr<<endl<<"You need "<<mr+1<<" runs to win"<<endl;
break;
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
for(i=0;;i++)
{
cout<<"Enter the number between 0 to 6"<<endl;
cin>>a[i];
if(a[i]>=0 && a[i]<=6)
{
d=random(7);
cout<<"I entered "<<d<<endl;
if(d!=a[i])
{
yr=yr+a[i];
cout<<"Your total runs:- "<<yr<<endl;
if(yr>mr)
{
cout<<"\aYOU WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<"COMPUTER SCORE - "<<mr<<endl<<name<<" - RUNS SCORED - "<<yr<<endl;
break;
}
}
else
{
cout<<"\aYOU ARE OUT!!!"<<endl;
if(mr>yr)
{
cout<<"\aI WIN!!!"<<endl<<"SCORE BOARD:-"<<endl<<"COMPUTER SCORE - "<<mr<<endl<<name<<" - RUNS SCORED - "<<yr<<endl;
break;
}
else
{
cout<<"\aMATCH DRAW!!!"<<endl<<"SCORE BOARD:-"<<endl<<name<<"COMPUTER SCORE - "<<yr<<endl<<"RUNS SCORED - "<<mr<<endl;
break;
}
}
}
else
{
cout<<"Invalid input"<<endl<<"YOU LOSE"<<endl;
exit(0);
}
}
}
}
cout<<"Do you want to play again???\t[y/n]\n";
cin>>op;
if(op=='n'||op=='N')
{
break;
}
}
getch();
}