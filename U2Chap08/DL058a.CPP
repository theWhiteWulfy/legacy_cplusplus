// Filename: \\U2Chap08\DL058a.CPP
#include<iostream.h>
#include<conio.h>
// The function is :
void Exchange(int A[ ], int N)
{
	for (int i = 0; i<N/2; i++)
	{
		int Temp = A[i];
		A[i] = A[N/2 + i];
		A[N/2 + i] = Temp;
	}
}
void main()
{
	clrscr();
	int A[10], N=8;
	for(int i=0; i<8; i++)
		cin >> A[i];
	Exchange(A,N);
	cout << " The Resultant Array is "<<endl;
	for( i = 0; i<N; i++)
		cout <<" "<<A[i];
}