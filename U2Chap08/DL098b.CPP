// Filename: \\U2Chap08\DL098b.CPP
// The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
// The function is as :
void swapcol(int arr[10][10], int m, int n) {
	int i,j;
	cout<<"\nThe original array is \n";
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe Array after swapping columns is \n";
	int temp;
	int k = n-1;
	for( i=0;i<m;i++) {
		temp = arr[i][0] ;
		arr[i][0] = arr[i][k];
		arr[i][k] = temp;
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
	int AR[10][10], i, j;
	clrscr();
	cout << "Enter the array elements ";
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			cin >> AR[i][j];
		}
	}
	swapcol(AR, 10, 10);
}

