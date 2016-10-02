// Filename: \\U1Chap04\IM4bf.CPP
// Bridging classes with a friend function
#include <iostream.h>
class Time;
// --- date class
class Date {
	int mo, da, yr;
	public:
	Date(int m, int d, int y) { mo = m; da = d; yr = y;}
	friend void display(Date&, Time&); // bridge function
};
// --- Time class
class Time {
	int hr, min, sec;
	public:
		Time(int h, int m, int s) { hr = h; min = m; sec = s;}
		friend void display(Date&, Time&); // bridge function
};
// ---- a bridge friend function
void display(Date& dt, Time& tm)
{
	cout << '\n' << dt.mo << '/' << dt.da << '/' << dt.yr;
	cout << ' ';
	cout << tm.hr << ':' << tm.min << ':' << tm.sec;
}
void main()
{
	Date dt(2,16,90);
	Time tm(10,55,0);
	display(dt, tm);
}