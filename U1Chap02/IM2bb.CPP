// Filename: \\U1Chap02\IM2bb.CPP
// Function overlaoding for calculating the square root of the different numbers
# include<iostream.h>
# include<math.h>
int sroot(int  n)
{
	return(sqrt(n));
}
long int sroot(long int  n)
{
	return(sqrt(n));
}
double sroot(double n)
{
	return(sqrt(n));
}
void main()
{
	int num;
	long int num1;
	double num2;
	cout << "Enter the value of num ";
	cin >> num;
	cout <<  "Enter the value of num1";
	cin >> num1;
	cout << "Enter the value of num2 ";
	cin >> num2;
	cout << "\nSquare root of int is " << sroot(num);
	cout << "\nSquare root of long int is " << sroot(num1);
	cout << "\nSquare root of double is " << sroot(num2);
}
