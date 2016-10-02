// Filename: \\U1Chap01\IM1cc.CPP
// Program to count number of words in a string
#include<iostream.h>
#include<stdio.h>
main()
{
	char str[50];
	int i, count = 1;
	cout << "\n\t Enter the string ";
	gets(str);
	while((str[i]!= '\0') && (str[i+1] != ' '))
	{
		if ((str[i] == ' ') || (str[i] == '.'))
		count++;
		i++;
	}
	cout << "\n\t Number of words in a string is " << count;
	return 0;
}