//Filename: \\U1Chap01\AI091a.CPP
#include<iostream.h>
void main() {
	int A[ ] = {10,15, 20, 25, 30 };
	int *p = A;
	while (*p < 30) {
		if ( *p % 3 != 0)
			*p = *p + 2;
		else
			*p = *p + 1;
		p++;
	}
	for ( int J= 0 ; J <=4;  J++) {
		cout << A[J]<< "*";
		if ( J % 3 ==0) cout << endl;
	}
	cout << A[4] *3<<endl;
}