//REVERSING EACH WORD SENTENCE

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
void main()
{
clrscr();
int  ch,i,j,k=0,p=0,l;
char st[50],sr[50];
cout<<"Enter Your Choice : "<<endl<<"1.Each Word Reversing"<<endl<<"2.Whole Sentence Reversing"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the String"<<endl;
gets(st);
l=strlen(st);
  for(i=0;i<=l;i++)
  {
  if((st[i]==' ')||(st[i]=='\0'))
  {
   for(j=i-1;j>=p;j--)
   {
   sr[k]=st[j];
   k++;
   }
  sr[k]=' ';
  k++;
  p=i+1;
  }
  }
  for(i=0;i<p;i++)
  cout<<sr[i];
break;

case 2:
cout<<"Enter the String"<<endl;
gets(st);
l=strlen(st);
p=l-1;
  for(i=l-1;i>=-1;i--)
  {
  if((st[i]==' ')||(i == -1))
  {
   for(j=i+1;j<=p;j++)
   {
   sr[k]=st[j];
   k++;
   }
  sr[k]=' ';
  k++;
  p=i-1;
  }
  }
for(i=0;i<=l;i++)
cout<<sr[i];
break;

default:
cout<<"Wrong Choice"<<endl;
break;

}


getch();
}

