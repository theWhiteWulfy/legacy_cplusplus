// Filename: \\U2Chap08\IM8db.CPP
# include <iostream.h>
# include <conio.h>
main()
{
	int  MARK[40];
	int n,i;
	clrscr();
	for(i = 0; i < 40; i++)
	{
		cout << "Enter the marks of " << (i+1) << " student ";
		cin >> MARK[i];
	}
	int count = 0, count1= 0;
	for(i = 0;i< 40;i++)
	{
		if (MARK[i] > 60)
		{
			count++;
		}
		if (MARK[i] < 33)
			count1++;
	}
	cout << "\nNumber ofstudent above 60"<<count;
	cout << "\nNumber ofstudent below 33"<<count1;
}