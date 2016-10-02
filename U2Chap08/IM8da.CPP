// Filename: \\U2Chap08\IM8da.CPP
# include <iostream.h>
# include <conio.h>
main()
{
	int Year[100];
	int n,i;
	clrscr();
	cout << "Enter how many year you want to enter = ";
	cin >> n;
	for(i = 1945; i < (1945 + n); i++)
	{
		cout << "Enter the number of employee in " << (i) << " year ";
		cin >> Year[i];
	}
	int count = 0;
	for(i = 1945;i<(1945+n);i++)
	{
		if (Year[i] ==0)
		{
			cout << "\nNo Employee is appointed in " << (i) << " Year";
			count++;
		}
	}
	cout << "\nNumber of year in which no employee is appointed "<<count;
}