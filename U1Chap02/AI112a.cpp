// Filename: \\U1Chap02\AI112a.CPP
#include<iostream.h>
void Line()				// Function [I]
{
	for (int L=1; L <= 80; L++) cout << '-';
	cout<<endl;
}
void Line(int N)			// Function [II]
{
	for (int L=1; L <= N; L++) cout << '*';
	cout<<endl;
}
void Line(char C, int N)	// Function [III]
{
	for (int L=1; L <= N; L++) cout <<C;
	cout<<endl;
}
void Line(int M,  int N)	// Function [IV]
{
	for (int L=1; L <= N; L++) cout << M*L;
	cout<<endl;
}
void main() {
	int A=9, B=4, C=3;
	char K='#';
	Line (K, B);
	Line (A, C);
}
