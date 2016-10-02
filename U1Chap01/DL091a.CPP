//Filename: \\U1Chap01\DL091a.CPP
#include<iostream.h>
void main() {
	int X[ ] = {10,25, 30, 55, 110 };
	int *p = X;
	while (*p < 110) {
		if ( *p % 3 != 0)
			*p = *p +1;
		else
			*p = *p +2;
		p++;
	}
	for ( int I=4; I>=1; I--) {
		cout << X[I]<< "*";
		if ( I % 3 ==0) cout << endl;
	}
	cout << X[0] *3<<endl;
}