// Filename: \\U1Chap04\IM4bd.CPP
// Constructor conversion function
#include <iostream.h>
#include <time.h>
class Date {
	int mo, da, yr;
	public:
		Date() {}        // null constructor
		Date(time_t);    // constructor conversion function
		void display();
};
// -- Member function to display the date
void Date::display()
{
	cout << mo << '/' << da << '/' << yr;
}
// -- constructor conversion function
Date::Date(time_t now)
{
	struct tm *tim = localtime(&now);
	da = tim->tm_mday;
	mo = tim->tm_mon + 1;
	yr = tim->tm_year;
}
void main()
{
	time_t now = time(0); // today’s date and time
	Date dt(now);    // invoke the conversion constructor
	dt.display();    // display today’s date
}
