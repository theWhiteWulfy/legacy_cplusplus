// Filename: \\U2Chap08\DL078a.CPP
// Function to display the elements which lie on diagonals
#include <stdio.h>
#include <iostream.h>
#include <conio.h>
const  M = 10;
const  N = 10;
void display_diagonals(int MATRIX[M][N], int r, int c)
{
	clrscr();	
	// Finding the diagonal from left index to right
	cout << "Diagonal One : ";
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
		{
			cout <<  MATRIX[i][j] << "  ";
			i++;
		}
	cout << endl;
	// Finding the diagonal from right index to left
	cout << "Diagonal Two : ";
	for(i=0; i<=r; i++)
	{
		for(int j=c-1; j>=0; j--)
		{
			cout << MATRIX[i][j] << "  ";
			i++;
		}
	}
	getch();
}
void main()
{
	int MATRIX[M][N];
	int i, j;
	int r, c;
	cout << "Enter total no. of rows: ";
	cin >> r;
	cout << "Enter total no. of columns: ";
	cin >> c;
	if ((r == c) && ((r%2==1) && (c%2==1)))
	{
		cout << "Input steps";
		cout << "\n\Enter the element in the array\n";
		for(i=0; i<r; i++)
			for(j=0; j<c; j++)
			{
				cin >> MATRIX[i][j];
			}
	}
	else
		return;
	display_diagonals(MATRIX, r, c);
}