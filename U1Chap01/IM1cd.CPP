// Filename: \\U1Chap01\IM1cd.CPP
// Program to find the sum of products and sales
#include <iostream.h>
#include <conio.h>
main()
{
	int sales, prod, i, j;
	int array[3][3];
	clrscr();
	for (i = 0; i < 3; i++)
	{
		cout << "Enter the salesman " << i+1 << " product \n";
		for (j = 0; j < 3; j++)
			cin >> array[i][j];
	}
	// Total sales of individual salesman
	for (i = 0; i < 3; i++)
	{
		sales = 0;
		for (j = 0; j < 3; j++)
		sales =  sales + array[i][j];
		cout << "Total sales of salesman " <<i+1<< " is " << sales << endl;
	}
	cout << endl;
	// Total of individual products
	for (i = 0; i < 3; i++)
	{
		prod = 0;
		for (j = 0; j < 3; j++)
			prod =  prod + array[j][i];
		cout << "Total product of product " <<i+1<< " is " << prod << endl;
	}
	return 0;
}