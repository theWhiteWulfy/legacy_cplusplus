// Filename: \\U1Chap01\IM1ax.CPP
int sub(int, int);
#include<iostream.h>
main()
{
	int n1,n2;
	int sub(int m1, int m2);	 // Correction 1
	int result = 0;
	cin>>n1;		// Correction 2
	cin>>n2;
	result = sub(n1, n2);	// Correction 3
}
int sub(int m1, int m2)	// Correction 4
{
	return(m1 - m2);
}