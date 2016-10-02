// Filename: \\U1Chap01\IM1cf.CPP
#include <conio.h>
#include <iostream.h>
#include <stdio.h>
// Function to search a given string within a string and its position
int search(char str[20], char substr[10])
{
	int j = 0, i, flag = 0, pos;
	for(i=0; str[i]!='\0'; i++)
	{
		if (substr[j] =='\0')
			break;
		if (str[i] == substr[j] )
		{
			pos = i;
			flag = 1;
			if (substr[j] =='\0')
				break;
			j++;
		}
		else
			flag = 0;
	}
	for(j=0; substr[j]!='\0'; j++);
		if (flag == 1)
		{
			pos = (pos - j + 2);
			 return(pos);
		}
		else
			return(-1);
}
void main()
{
	char nstr[20], nsub[10];
	int ctr = 0;
	cout << "Enter main string : ";
	gets(nstr);
	cout << "Enter search string : ";
	gets(nsub);
	ctr = search(nstr, nsub);
	if (ctr == -1)
		cout << "String does not found.";
	else
		cout << "String found at " << ctr << " position.";

}

