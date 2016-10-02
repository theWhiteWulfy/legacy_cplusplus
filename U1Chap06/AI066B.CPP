// Filename: \\U1Chap06\AI066b.CPP
// Function to count and display the number of blank spaces present in a text file
#include <fstream.h>
#include <iostream.h>
#include <ctype.h>
#include <conio.h>
void display()
{
	ifstream afile;
	/* If PARA.TXT contains the following line :
		C++ File handling in Class-12 */
	afile.open("PARA.TXT");
	char ch;
	int c = 0;
	while(afile)
	{
		afile.get(ch);
		if (ch == ' ' )
			c++;
	}
	cout << "The number of blank spaces : " << c;
}
void main()
{
	clrscr();
	display();
}