// Filename: \\U1Chap01\IM1czab.CPP
#include<iostream.h>
int &max(int &x, int &y)
{
	if(x>y)
		return(x);
	else
		return(y);
}
void main( )
{
	int A = 10, B = 13;
	max(A, B) = -1;
	cout << "A =" << A << "B=" << B <<endl;
	max(B, A) = 7;
	cout << "A = " << A++ << "B=" << B-- <<endl;
	max(A,B) = 3;
	cout<<"A ="<<A<<"B = "<< B << endl;
}