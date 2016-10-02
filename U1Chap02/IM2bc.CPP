// Filename: \\U1Chap02\IM2bc.CPP
// Overloading function to find the minimum using min() function
# include<iostream.h>
# include <conio.h>
int min(int a, int b)
{
	if (a<b)
		return(a);
	else
		return(b);
}
char min(char a, char b)
{
	if (a<b)
		return(a);
	else
		return(b);
}
double min(double a, double b)
{
	if (a<b)
		return(a);
	else
		return(b);
}
void main()
{
	int n, n1;
	char ch, ch1;
	double d, d1;
	clrscr();
	cout << "Enter two integers ";
	cin >> n >> n1;
	cout << "Enter two characters ";
	cin >> ch >> ch1;
	cout << "Enter two double precision quantity ";
	cin >> d >> d1;
	cout << "\nMinimum of two integer "<<min(n,n1);
	cout << "\nMinimum of two characters "<<min(ch,ch1);
	cout << "\nMinimum of two double precision quantity "<<min(d,d1);
}