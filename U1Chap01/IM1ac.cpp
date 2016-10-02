// Filename: \\U1Chap01\IM1ac.CPP
#include<iostream.h>
#include<conio.h>
main()
{ 	int Ch = 9, Sch = 90;
	char S[2][2];	// Correction 1
	if(Ch <= 9)		// Correction 2
		cout << Ch;
	for(int x = 0; x < 2; x++)
		for(int y = 0; y < 2; y++)
		{
			if (y == 0)
				S[x][y]='A';	// Correction 3
			else
			S[x][y]='B';
			cout << S[x][y];     	// Correction 4
		}
		getch();		//Correction 5
}
