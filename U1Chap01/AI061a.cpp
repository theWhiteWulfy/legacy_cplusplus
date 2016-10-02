//Filename: \\U1Chap01\AI061a.CPP
#include <iostream.h>
// Demonstrates inline function
inline float dollartorupee(float dollar)
{
	return (45 * dollar);
}
void main()
{
	float dlr;  // Dollar input
	cout << "\nEnter dollar value : ";
	cin >> dlr;
	cout << "The rupee value is : " << dollartorupee(dlr);
}
