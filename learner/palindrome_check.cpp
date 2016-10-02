//TO CHECK WHETHER ENTERED STRING IS PALINDROME OR NOT
 
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char string[90], c;
cout<<"Enter string:";
cin.getline(string, 80);
//Loop to find the length of the string.
for(int len=0;string[len]!='\0';len++);
int i,j, flag=1;
for(i=0,j=len-1;i<len/2;i++,j--)
{
if(string[i]!=string[j])
	{
	flag=0;
	break;
	}
}
if(flag)
cout<<"IT is a palindrome. \n";
else
cout<<"It is not a palindrome. \n";
return 0;
}
