// Filename: \\U2Chap08\IM8dc.CPP
// Program to find the inverse of the matrix
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
// Total number of rows and column in the matrix
# define  ROW  4
# define  COL  4
float mat1[ROW][COL];
float mat2[ROW][COL];
int valid;
void inputmatrix()	// This Function read the matrix having specific number of rows and column
{
	for (int i=0; i<ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			gotoxy((1+2*j) * COL, i+5);
			cout << "?";
			gotoxy((1+2*j) * COL, i+5);
			cin >> mat1[i][j];
		}
	}
}
void add(int i, int k, float r)		// This function helps to find the Inverse of the matrix
{
	for (int j = 0; j < ROW; j++)
	{
		mat1[i][j] += r * mat1[k][j];
		mat2[i][j] += r * mat2[k][j];
	}
}
void mul(int i, float r)	// This function helps to find the Inverse of the matrix
{
	 for (int j = 0; j < ROW; j++)
	 {
		mat1[i][j] = r * mat1[i][j];
		mat2[i][j] = r * mat1[i][j];
	}
}
void inverse()	// Function to find the inverse of a matrix
{
	int x, y, z;
	for (x = 0; x < ROW; x++)
		for (y = 0; y < COL; y++)
		{
			if (x == y)
				mat2[x][y] = 1;
			else
				mat2[x][y] = 0;
		}
	valid = 1;
	for (x = 0; x < ROW; x++)
	{
		z = x;
		do
		{
			if (mat1[z][x] == 0)
				z++;
		} while (mat1[z][x] == 0 && z < COL);
		if (z > ROW-1)
		{
			valid = 0;
			break;
		}
		if (z != x)
			add(x, z, 1 / mat1[z][x]);
		if (mat1[x][x] != 1)
			mul(x, 1 / mat1[x][x]);
		int i = 0;
		do
		{
			if (i == x)
				i++;
			if (i < ROW-1 && mat1[i][x] != 0)
				add(i, x, -mat1[i][x]);
			i++;
		} while (i < ROW);
	}
}
void displaymatrixinv()	// Function to display the inverse of the matrix
{
	if (valid)
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
				cout << setw(15) << mat2[i][j];
			cout << endl;
		}
	}
	else
		cout << "\n\tINVERSE DOESNOT EXIST" << endl;
}
// Function to call the function for reading and calculating the inverse of the
//matrix function from the class
void inv()
{
	int mat[ROW][COL];
	clrscr();
	cout << "\n\n\tINPUT MATRIX \n";
	inputmatrix();
	clrscr();
	inverse();
	cout << "\n\n\tTHE INVERSE OF THE MATRIX ENTERED IS \n";
	displaymatrixinv();
	gotoxy(1, 25);
	cout << "\tPress any key to continue ";
	getch();
}
void main()		// Main Program
{
	inv();
}