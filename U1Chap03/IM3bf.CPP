// Filename: \\U1Chap03\IM3bf.CPP
// This program find the difference of two given times
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class time
{
	int hour, min;
	public:
		void read_time(int h, int m);
		void show_time();
		void diff_time(time t1, time t2);
};
void time::read_time(int h, int m)
{
	hour = h;
	min = m;
}
void time::show_time()
{
	cout << "\n\n" << setw(78) << setfill('*') << "*";
	cout << "\n\nCURRENT TIME IS==> " << hour << " hrs " << min << " min " << "\n";
}
void time::diff_time(time t1, time t2)
{
	int hr, mi;
	if (t1.hour > t2.hour)
	{
		hr = t1.hour-t2.hour;
		if (t1.min > t2.min)
			mi = t1.min-t2.min;
		else
		{
			mi= (t2.min+60) - t1.min;
			hr = hr - 1;
		}
	}
	else
	{
		hr = t2.hour-t1.hour;
		if (t1.min > t2.min)
			mi = t1.min-t2.min;
		else
		{
			mi = (t2.min+60) - t1.min;
			hr = hr - 1;
		}
	}
	if(mi >= 60)
	{
		hr+=mi/60;
		mi=mi%60;
	}
	if(hr >= 24)
		hr-=24;
	cout << "\n\n The time difference is :  " << hr << ":" << mi;
}
void main()
{
	clrscr();
	time st, ft, x;
	int h1, m1;
	cout << "\n\n ENTERING FOR FT : ";
	cout << "\n\n\n" << setw(78) << setfill('*') << "*";
	cout << "\n\nEnter the time in hours and minutes : ";
	cin >> h1 >> m1;
	ft.read_time(h1, m1);
	cout << "\n\n ENTERING FOR ST:  ";
	cout << "\n\n\n" << setw(78) << setfill('*') << "*";
	cout << "\n\nEnter the time in hours and minutes :  ";
	cin >> h1 >> m1;
	st.read_time(h1, m1);
	cout << "\n\n DISPLAY FOR TIME FOR FT:   ";
	ft.show_time();
	cout << "\n\n DISPLAY TIME FOR ST:   ";
	st.show_time();
	x.diff_time(ft, st);
}