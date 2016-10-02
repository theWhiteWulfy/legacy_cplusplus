// Filename: \\U1Chap01\IM1bd.CPP
#include<iostream.h>
int m=50;
void main( )
{ 
	int m=25;
	{ 	int m=20*:: m;
		cout<<"m="<<m <<endl;
		cout<<"::m="<<::m <<endl;
	}
	::m=++m+m;
	cout<<"m="<<m <<endl;
	cout<<"::m="<<::m <<endl;
}
