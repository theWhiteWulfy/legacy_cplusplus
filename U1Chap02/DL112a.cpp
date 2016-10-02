// Filename: \\U1Chap02\DL112a.CPP
#include<iostream.h>
void Print()				// Function [I]
{
	for (int K=1; K <= 60; K++) cout << "-";
	cout<<endl;
}
void Print(int N)			// Function [II]
{
	for (int K=1; K <= N; K++) cout << "*";
	cout<<endl;
}
void Print(int A, int B)	// Function [III]
{
	for (int K=1; K <= B; K++) cout << A*K;
	cout<<endl;
}
void Print(char T, int N)	// Function [IV]
{
	for (int K=1; K <= N; K++) cout << T;
	cout<<endl;
}
void main() {
	int U=9, V=4, W=3;
	char C= '@';
	Print (C, V);
	Print (U, W);
}