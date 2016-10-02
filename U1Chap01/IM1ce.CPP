// Filename: \\U1Chap01\IM1ce.CPP
// Program to check whether the string is palindrome or not.
#include <iostream.h>
#include <string.h>
#include <conio.h>
void main()
{
	char str[20];
	int i, j;
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	cin >> str;		// To read the string
	char flag = 'y';
	cout << "\n\tThe entered string is ";
	for (i = 0; str[i] != '\0'; i++)
		cout << str[i];
	for (j = 0, i -= 1; i>j; j++, i--)
	{
		if (str[i] != str[j])	// Checking for palindrome
		{
			flag = 'n';
			break;
		}
	}
	if (flag == 'n')
		cout << " is not palindrome ";
	else
		cout << " is a palindrome";
	getch();
}
