#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{	
	clrscr();
	int n,i,mid;
	cout<<"Enter a number to check if it is prime or not\n";
	cin>>n;
	mid=n/2;
	for(i=2;i<=mid;i++)
	if(n%i==0)
	break;
	if(i>mid)
	cout<<"The no."<<n<<" is a prime number\n";
	else
	cout<<"The no."<<n<<" is not a prime number\n";
	getch();
}