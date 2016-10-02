// Filename: \\U1Chap07\DL077a.CPP
#include<iostream.h>
void main()
{
	int Array[] = {4, 6, 10, 12};
	int *pointer = Array;
	for (int I = 1; I <= 3; I++)
	{
		cout << *pointer << "#";
		pointer++;
	}
	cout << endl;
	for (I = 1; I <= 4; I++)
	{
		(*pointer) *= 3;
		--pointer;
	}
	for (I = 1; I < 5; I ++)
		cout << Array[I - 1] << "@";
	cout << endl;
}
