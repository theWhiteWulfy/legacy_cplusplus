// Filename: \\U1Chap01\DL071a.CPP
#include <iostream.h>
void Withdef(int HisNum = 30)
{
	for (int I=20; I<=HisNum; I+=5)
		cout << I << ",";
	cout << endl;
}
void Control(int &MyNum)
{
	MyNum+=10;
	Withdef(MyNum);
}
void main()
{
	int YourNum=20;
	Control(YourNum);
	Withdef();
	cout<<"Number=" << YourNum<< endl;
}
