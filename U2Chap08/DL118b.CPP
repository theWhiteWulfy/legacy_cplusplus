// Filename: \\U2Chap08\DL118b.CPP
// The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void sum_diagonal(float MATRIX[6][6], int M, int N) {
	int i, j, s1 = 0, s2 = 0;
	cout << "Input steps";
	// Display the array elements
	for(i=0; i<M; i++) {
		for(j=0; j<N; j++)
			cout << MATRIX[i][j] << "\t";
		cout << "\n";
	}
	// Finding  the diagonal sum in s1 from left index to right
	for(i=0; i<M; i++) 
		for(j=0; j<N; j++) {
			s1 = s1 + MATRIX[i][j];
			i++;
		}
	// Finding the diagonal sum s2 from right index to left
	for (i=0; i<=M; i++)
		for(j=N-1; j>=0; j--) {
			s2 = s2 + MATRIX[i][j];
			i++;
		}
	// The resulted sum of diagonals
	cout << s2 << " " << s1;
	getch();
}
void main()
{
	float ARR[6][6];
	clrscr();
	cout << "\nEnter the array elements \n";
	for(int i=0;i<6;i++)
		for(int j =0;j<6;j++)
			cin>>ARR[i][j];
	sum_diagonal(ARR,6,6);
}