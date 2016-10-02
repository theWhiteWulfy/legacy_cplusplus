// Filename: \\U2Chap08\DL118c.CPP
//The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//The function is as :
void COLSUM(int A[][100], int M, int N) {
	int SUMC;
	for(int j = 0; j<M; j++) {
		SUMC=0;
		for (int i=0; i<N; i++)
			SUMC = SUMC + A[i][j];
		cout << "Sum of Column " << j << " = " << SUMC << endl;
	}
}
void main()
{
	int ARR[100][100], m, n;
	clrscr();
	cout << "Enter no. of rows : ";
	cin >> m;
	cout << "Enter no. of columns : ";
	cin >> n;
	cout << "\nEnter the array elements \n";
	for(int i=0;i<m;i++)
		for(int j =0;j<n;j++)
			cin>>ARR[i][j];
	COLSUM(ARR,m,n);
}