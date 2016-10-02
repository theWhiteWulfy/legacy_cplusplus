// Filename: \\U1Chap01\IM1cx.CPP
#include<iostream.h>
#include <conio.h>
void Multiply(int A[8][8], int B[8][8], int C[8][8])
{
	for(int i = 0; i <= 7; i ++)
		for(int j = 0; j <= 7; j++)
		{
			int s = 0;
			for(int k = 0; k<=7; k++)
				s = s + A[i][k]*B[k][j];
			C[i][j] = s;
		}
}
main()
{
	int A[8][8], B[8][8], C[8][8],i,j;
	clrscr();
	cout << "Enter values for a matrix 8x8\n";
	for(i=0;i<=7;i++)
		for(j=0;j<=7;j++)
		{
			cin>>A[i][j];
			cin>>B[i][j];
		}
		Multiply(A,B,C);
		for(i=0;i<=7;i++)
		{
			for(j=0;j<=7;j++)
			cout<<C[i][j]<<" ";
			cout<<"\n";
		}
		return 0;
}