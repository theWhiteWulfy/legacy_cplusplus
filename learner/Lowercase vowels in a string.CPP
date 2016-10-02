//prg to count no of lower case vowels in a string

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void main()
{
clrscr();
char st[100];
int l,c,i;
cout<<"Enter the string"<<endl;
cin.getline(st,100);
l=strlen(st);
for(i=0;i<=l;i++)
{
if(islower(st(i))) && ((st(i)==a)||(st(i)==e)||(st(i)==i)||(st(i)==o)||(st(i)==u))
c++;
}
cout<<"The no is"<<c;
getch();
}
