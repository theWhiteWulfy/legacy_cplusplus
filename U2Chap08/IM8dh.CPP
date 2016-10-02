// Filename: \\U2Chap08\IM8dh.CPP
// This function search an element in an array using linear search.
// data is the searched element in array P
#include<iostream.h>
#include<conio.h>
const val = 100;
int linear(float AR[val], float data ,int n)
{
	int  i, flag = 0, pos = 1;
	i= 0;
	while ( i < n)
	{
		if (AR[i] == data)
		{
			flag = 1;
			break;
		}
		i++;
	 }
	if (flag == 1)
		return(1);
	else
		return(0);
}
main()
{
	float AR[100],data;
	int n,x;
	clrscr();
	cout << "Enter n";
	cin >>n;
	for(int i=0;i<n;i++)
	cin >>AR[i];
	cout << "Enter number to be searched ";
	cin >>data;
	x = linear(AR,data,n);
	if (x ==1)
	cout << "Number exists in the list";
	else
	cout << "Number does not exists in the list";
}