// Filename: \\U2Chap08\DL058b.CPP
// The function is :
#include <iostream.h>
void Divby2or3(int A[ ][5], int N, int M)
{
	int Sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (A[i][j] % 2 == 0 || A[i][j] % 3== 0)
				Sum += A[i][j];
	cout << Sum;
}
void main()
{
	int X[4][5], n,m;
	for(int i=0;i<4;i++)
	for(int j=0;j<5;j++)
	cin >> X[i][j];
	Divby2or3(X,4,5);
}