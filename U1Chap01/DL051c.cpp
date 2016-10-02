// Filename: \\U1Chap01\DL051c.CPP
#include<stdlib.h>			
#include<iostream.h>
void main()
{
	randomize();
	int Num, Rndnum;
	cin >> Num;
	Rndnum = random(Num) + 5;
	for (int N = 1; N <= Rndnum; N++)
		cout << N << " ";
}
