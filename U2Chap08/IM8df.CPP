// Filename: \\U2Chap08\IM8df.CPP
// Program to find the second maximum in a matrix
# include <iostream.h>
# include <conio.h>
void main()
{
	int mat[3][3], max2, max = 0;
	clrscr();
	cout << "Enter the array elements : \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mat[i][j];
		}
	}
	for ( i = 0; i < 3; i++)
	{
		for ( int j = 0; j < 3; j++)
		{
			if(mat[i][j] > max)
			{
				max2 = max;
				max = mat[i][j];
			}
		}
	}
	cout << "The second maximum element of the matrix " << max2;
	getch();
}