// Filename: \\U2Chap08\AI078a.CPP
// Function to display the elements which lie on middle of row and column
#include <stdio.h>
#include <iostream.h>
#include <conio.h>
const  M = 10;
const  N = 10;
void display_RowCol(int Array[M][N], int r, int c)
{
	clrscr();
	int row = r / 2;
	int col = c / 2;
	// Finding the middle row
	cout << "Middle Row : ";
	for(int j=0; j<c; j++)
		cout << Array[row][j] << "  ";
	cout << endl;
	// Finding the middle column
	cout << "Middle Column : ";
	for(j=0; j<c; j++)
		cout << Array[j][col] << "  ";
	getch();
}
void main()
{
	clrscr();
	int Array[M][N];
	int i, j;
	int r, c;
	cout << "Enter total no. of rows: ";
	cin >> r;
	cout << "Enter total no. of columns: ";
	cin >> c;
	// Array to be a square matrix with odd dimension 
	if ((r == c) && ((r%2==1) && (c%2==1)))
	{
		cout << "Input steps";
		cout << "\n\Enter the element in the array\n";
		for(i=0; i<r; i++)
			for(j=0; j<c; j++)
			{
				cin >> Array[i][j];
			}
	}
	else
	{
		cout << "Input row and column not valid";
		getch();
		return;
	}
	display_RowCol(Array, r, c);
}
