// Filename: \\U2Chap08\DL088a.CPP
// Function to display the elements which lie on middle of row and column
// Product of Columns
#include<iostream.h>
#include<conio.h>
void Prod_column(float ARR[4][3], int r, int c)
{
	int i, j;
	float prod = 1;
	cout << "The array is....\n";
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
			cout << ARR[i][j] << "\t";
		cout << endl;
	}
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			prod = prod * ARR[j][i];
		}
		cout << "\nProduct of column " << (i+1) << "=\t" << prod;
		prod = 1;
	}
}
void main()
{
	clrscr();
	float ARR[4][3];
	cout << "Enter the values for an array of 4 x 3 : \n";
	for(int i=0;i<4;i++)
		for(int j =0;j<3;j++)
			cin>>ARR[i][j];
	Prod_column(ARR,4,3);
}