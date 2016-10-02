// Filename: \\U2Chap08\AI088a.CPP
// Product of Rows
#include<iostream.h>
#include<conio.h>
void Prod_row(float ARR[4][3], int r, int c)
{
	int i, j;
	float prod = 1;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
			cout << ARR[i][j] << "\t";
		cout << endl;
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			prod = prod * ARR[i][j];
		}
		cout << "\nProduct of Row " << (i+1) << "=\t" << prod;
		prod = 1;
	}
}
void main()
{
	float ARR[4][3];
	clrscr();
	cout << "\n\nEnter the array elements for an array 4 by 3 :\n";
	for(int i=0;i<4;i++)
		for(int j =0;j<3;j++)
			cin>>ARR[i][j];
	cout << "\n\nThe array is ....";
	cout << "\n======================" << endl;
	Prod_row(ARR,4,3);
}