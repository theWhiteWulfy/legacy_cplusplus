// Filename: \\U1Chap01\AI081b.CPP
// Calculation of  total and grade
#include<iostream.h>
void main()
{
	int A=5, B=10;
	for(int I=1;I<=2;I++)
	{
		cout<<"Line1="<<A++<<"&"<<B-2<<endl;
		cout<<"Line2="<<++B<<"&"<<A+3<<endl; 
	}
}