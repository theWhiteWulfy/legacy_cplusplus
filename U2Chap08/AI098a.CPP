// Filename: \\U2Chap08\AI098a.CPP
// The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
// The function is as :
void SWAPARR(int arr[4][4], int m, int n) {
	int i,j;
	cout<<"The original array is.... \n\n";
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe Array after swapping columns is...... \n\n";
	int temp;
	int k = m-1;
	for( i=0;i<n;i++) {
		temp = arr[0][i] ;
		arr[0][i] = arr[k][i];
		arr[k][i] = temp;
	}
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void main()
{
	clrscr();
	int AR[4][4], i, j;
	cout << "Enter the elements for an array of 4 by 4 :\n";
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			cin >> AR[i][j];
		}
	}
	SWAPARR(AR, 4, 4);
}

