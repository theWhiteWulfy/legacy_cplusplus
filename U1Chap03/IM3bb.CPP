// Filename: \\U1Chap03\IM3bb.CPP
// Program to calculate the NORM of a matrix
#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
// Class declaration for matrix
class mat_norm
{
	int i, j, r, c;
	int mat[10][10];
	public:           // Member functions
		void mat_read();	// Reading values into matrix
		int calculate_norm();
		void mat_display();
};
void mat_norm::mat_read()	// Function body for mat_read()
{
	cout << "Enter the size of the matrix ";
	cin >> r >> c;
	cout << "Enter values into the matrix " << endl;
	for (i = 0; i<r; i++)
		for (j=0; j<c; j++)
			cin >> mat[i][j];
}
int mat_norm::calculate_norm()	// Function body for calculate_norm()
{
	int sum = 0;
	for (i = 0; i<r; i++)
		for (j=0; j<c; j++)
			sum = sum + (mat[i][j] * mat[i][j]);
	return (sqrt(sum));
}
void mat_norm::mat_display()	// Function body for displaying the output
{
	cout << "The Input matrix is " << endl;
	for (i = 0; i<r; i++)
	{
		cout << endl;
		for (j=0; j<c; j++)
			cout << mat[i][j] << "		";
	}
}
void main()
{
	clrscr();
	mat_norm mat;
	clrscr();
	mat.mat_read();	// Reading data through mat_read() function
	mat.mat_display();	// Displaying data through mat_display() function
	cout << "\nThe NORM of above matrix is : " << mat.calculate_norm();
}
