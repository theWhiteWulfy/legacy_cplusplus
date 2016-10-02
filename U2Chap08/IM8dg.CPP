// Filename: \\U2Chap08\IM8dg.CPP
// Function to calculate the multiplication of row elements
#include<iostream.h>
#include<conio.h>
void Row_multi(int A[4][6])
{
	int mult, i, j;
	for (i=0; i<4; i++)
	{
		mult = 1;
		for (j = 0; j<6; j++)
			mult = mult * A[i][j];
		cout << "Multiplication of row : " << i+1 << "  is : " << mult << endl;
	}
}
main()
{
	int A[4][6],i,j;
	for(i=0;i<4;i++)
		for(j=0;j<6;j++)
			cin >>A[i][j];
	Row_multi(A);
}