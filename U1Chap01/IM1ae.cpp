// Filename: \\U1Chap01\IM1ae.CPP
#include <iostream.h>
void main()
{
	int num, val;
	cin >> num;
	switch (num)
	{
		case 5 : val = num * 25 - 20;
			cout << num +val;
			break;
		case 10 : val = num * 20 - 15;
			cout << val - num;
			break;
	}
}