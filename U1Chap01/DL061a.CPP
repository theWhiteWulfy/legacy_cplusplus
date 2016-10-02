// Filename: \\U1Chap01\DL061a.CPP
#include<iostream.h>
void main()
{
	long NUM=1234543;
	int F=0, S=0;
	do
	{
		int Rem = NUM%10;
		if (Rem % 2 != 0)
			F+=R;
		else
			S+=R;
		NUM /=10;
	}while (NUM>0);
	cout << F-S;
}