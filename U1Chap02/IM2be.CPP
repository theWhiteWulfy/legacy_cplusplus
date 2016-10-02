// Filename: \\U1Chap02\IM2be.CPP
// Program to convert the lowercase letter into uppercase and to increment an integer
# include <iostream.h>
# include <conio.h>
char convert(char ch)
{
	return(ch -32);
}
int increment(int n)
{
	return(++n);
}
void main()
{
	int num;
	char ch1;
	clrscr();
	cout<< "Enter a character in lower case ";
	cin >> ch1;
	cout << "Enter an integer ";
	cin >> num;
	cout<< "\nUpper Case Aplhabet is => " <<convert(ch1);
	cout<< "\nIncremented Integer is => " <<increment(num);
}