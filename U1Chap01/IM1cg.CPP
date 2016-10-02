// Filename: \\U1Chap01\IM1cg.CPP
#include <conio.h>
#include <iostream.h>
#include <stdio.h>
// Function to find the matching parenthesis
int match_paren(char str[20])
{
	int i, j;
	cout << "\n\tThe entered string is ";
	for (i = 0; str[i] != '\0'; i++)
		cout << str[i];
	int stp = 0;	// Let starting parenthesis is 0
	int enp = 0;	// and ending parenthesis is also 0
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(')
			stp = stp + 1;
		else
			if (str[i] == ')')
				enp = enp + 1;
	}
	if (stp == enp)
		return 1;
	else
		return 0;
}
void main()
{
	clrscr();
	int ctr;
	char nstr[20];
	cout << "Enter any algebraic equation : ";
	gets(nstr);
	ctr = match_paren(nstr);
	if (ctr == 1)
		cout << "\nThe parenthesis are match equally";
	else
		cout << "\nParenthesis are not matched";
}

