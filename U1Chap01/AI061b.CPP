// Filename: \\U1Chap01\AI061b.CPP
#include<iostream.h>
void main()
{
	long Number=7583241;
	int First=0, Second=0;
	do
	{
		int R = Number%10;
		if (R % 2 != 0)
			First+=R;
		else
			Second+=R;
		Number /=10;
	}while (Number>0);
	cout << First-Second;
}

