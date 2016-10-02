// Filename: \\U1Chap01\IM1cb.CPP
// Program to print first 10 multiples of an integer N
#include <iostream.h>
#include <conio.h>
main()
{
	int N, i;
	clrscr();
	cout  << "Enter the number to find the multiple ";
	cin >> N;
	// Printing the multiple of N
	for (i =  1; i<=10; i++)
		cout << N << " 	*           " <<  i  <<  "       =       " << N * i  << endl;
	return 0;
}