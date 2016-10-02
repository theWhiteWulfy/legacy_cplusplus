// Filename: \\U2Chap08\AI108a.CPP
// The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
// The function is as :
void REASSIGN(int A[], int N) {
	for (int I = 0; I < N; I++) {
		if (A[I]%5 == 0)
			A[I] = A[I] / 5;
		else
			A[I] = A[I] * 2;
	}
}
void main()
{
	int AR[100], n, i;
	clrscr();
	cout << "\nEnter total no. of elements : ";
	cin >> n;
	for(i=0;i<n;i++) {
		cin>>AR[i];
	}
	REASSIGN(AR, n);
	cout << "After reassign, the elements are : \n";
	for(i=0;i<n;i++) {
		cout<<AR[i]<<"\t";
	}
}

