

#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int i,j,c=1,l;
char a[100];
cout<<"Enter Array"<<endl;
cin.getline(a,100);
l=strlen(a);
for(i=0;i<l;i++)
{
c=1;
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
{
c=c+1;
a[j]=' ';
}
}
if(a[i]!=' ')
cout<<"Element"<<a[i]<<"is present"<<c<<"times"<<endl;
}
getch();
}




