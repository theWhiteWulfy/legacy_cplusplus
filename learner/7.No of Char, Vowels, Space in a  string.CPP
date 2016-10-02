//NO CHAR VOWELS IN A WORD

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
void main()
{
int i,j=0,l=0,u,v=0,s=0;
char st[50];
clrscr();
cout<<"Enter the string"<<endl;
gets(st);

l=strlen(st);

  for(j=0;j<l;j++)
  {
  if((st[j]== ' '))
  s=s+1;
  if((st[j]=='a')||(st[j]=='e')||(st[j]=='o')||(st[j]=='i')||(st[j]=='u')||(st[j]=='A')||(st[j]=='E')||(st[j]=='O')||(st[j]=='I')||(st[j]=='U'))
  v=v+1;
  }
cout<<"No of Words = "<<s+1<<endl<<"No Space = "<<s<<endl<<"No of Vowels ="<<v<<endl<<"No of Characters ="<<l-s;
getch();

}
