// Filename: \\U1Chap01\AI051c.CPP
#include<stdlib.h>
#include<iostream.h>
void main()
{
	randomize();
	int Num, Rndnum;
	cin >> Num;;
	Rndnum = random(Num) + 14;
	for (int N = 1; N <= Rndnum; N++)
		cout << N<< " ";
}
