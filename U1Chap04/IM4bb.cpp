// Filename: \\U1Chap04\IM4bb.CPP
#include <iostream.h>
int c = 0;
class block
{
	public:
		block()
		{
			cout << "Total object created "<< endl;
		}
		~block()
		{
			cout << "Total object destroyed " << endl;
		}
};
void main()
{
	block M1,M2,M3,M4;
	cout << "BLOCK 1" << endl;
	block  M5;
	cout << "BLOCK 2" << endl;
	block M6;
	cout << "BLOCK 3" << endl;
}
