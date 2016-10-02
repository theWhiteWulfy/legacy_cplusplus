// Filename: \\U1Chap01\IM1as.CPP
#include <iostream.h>
main( )
{
	int sum[2][4];		// Correction 1
	for(int i = 0; i<2; i++)		// Correction 2
	{
		for(int j=0; j<=3; j++)	// Correction 3
		{
			cout<<sum[i][j];	// Correction 4
		}
	}
}