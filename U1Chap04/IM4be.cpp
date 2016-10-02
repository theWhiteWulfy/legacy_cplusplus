// Filename: \\U1Chap04\IM4be.CPP
// Conversion member function
#include <iostream.h>
class Date {
	int mo, da, yr;
	public:
		Date(int m, int d, int y) { mo = m; da = d; yr = y; }
		operator long();    // member conversion function
};
// -- the member conversion function
Date::operator long()
{
	static int dys[]={31,28,31,30,31,30,31,31,30,31,30,31};
	long days = yr;
	days *= 365;
	days += yr / 4;
	for (int i = 0; i < mo-1; i++)
		days += dys[i];
	days += da;
	return days;
}
void main()
{
	Date xmas(12, 25, 89);
	long since = xmas;
	cout << '\n' << since;
}
