// Filename: \\U2Chap08\IM8de.CPP
// Program to find the sum of array elements
#include <iostream.h>
#include <conio.h>
void positive(int R[7][7])
{
	int s =0;
	for (int i = 0; i < 7; i++)
	for (int j= 0; j<7;j++)
	{
		if (R[i][j] > 0)
		s = s + R[i][j];
	}
	cout << "\n\tSum of positive elements of array  -> " << s;
}
main()
{
	clrscr();
	int R[7][7],i,j;
	for(i=0;i<7;i++)
	for(j=0;j<7;j++)
		cin >> R[i][j];
	positive(R);
}