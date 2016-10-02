// Filename: \\U1Chap01\IM1ca.CPP
// The required function is :
#include <iostream.h>
#include <conio.h>
// Function to swap A and B without using third variable
void SWAP(int A, int B)
{
	A = A + B;
	B = A - B;
	A = A - B;
	cout << "\n\tAfter swapping a is - > " << A;
	cout << "\n\tAfter swapping b is - > " << B;
	getch();
}
void main()
{
	clrscr();
	int x, y;
	cout << "Enter first number : ";
	cin >> x;
	cout << "Enter second number : ";
	cin >> y;
	SWAP(x, y);
}

