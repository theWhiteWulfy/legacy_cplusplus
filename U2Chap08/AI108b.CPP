// Filename: \\U2Chap08\AI108b.CPP
// The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int ALTERSUM(int B[][5], int N, int M) {
	int s=0, C=0;
	for(int I = 0; I < N; I++)
		for (int J = 0; J<M; J++) {
			if (C%2 != 1)
				s = s + B[I][J];
			C++;
		}
	return s;
}
void main()
{
	int B[100][5], n, i, j;
	int sum=0;
	clrscr();
	cout << "\nEnter total no. rows for array : ";
	cin >> n;
	cout << "Enter the values for an array of : " << n << " rows & 5 columns : \n";
	for(i=0;i<n;i++) {
		for (j=0; j<5; j++) {
			cin>>B[i][j];
		}
	}
	cout << "The array is :...\n";
	for(i=0;i<n;i++) {
		for (j=0; j<5; j++) {
			cout<<B[i][j] << "\t";
		}
	cout << endl<< "\n";
	}

	sum = ALTERSUM(B, n, 5);
	cout << "\nThe alternate sum array is : " << sum;
}


