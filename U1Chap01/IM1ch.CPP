// Filename: \\U1Chap01\IM1ch.CPP
// A menu driven program to find the conversion of
//	1.	Celsius to Fahrenheit
//	2.	Fahrenheit to Celsius
#include <iostream.h>
#include <conio.h>
float cel_fah(float c_temp);	// Function to convert Celsius to Fahrenheit
float fah_cel(float c_temp);	// Function to convert Fahrenheit to Celsius
void main()
{
	int ctr;
	float valread, temp;
	clrscr();
	cout << "M A I N  	M E N U"<< endl << endl;
	cout << "1.Celsius to Fahrenheit" << endl;
	cout << "2.Fahrenheit to Celsius" << endl << endl;
	cout << "Enter your choice " ;
	cin >> ctr;
	cout << "\nEnter the conversion value ";
	cin >> temp;
	switch (ctr)
	{
		case 1:
		{
			valread = cel_fah(temp);
			cout << "The fahrenheit value is " << valread;
			break;
		}
		case 2:
		{
			valread = fah_cel(temp);
			cout << "The fahrenheit value is " << valread;
			break;
		}
	}	
}
// Function to convert Celsius to Fahrenheit
float cel_fah(float temp)
{
	float f_temp;
	f_temp = temp * (9.0 / 5.0) + 32.0;
	return (f_temp);
}
// Function to convert Fahrenheit to Celsius
float fah_cel(float temp)
{
	float c_temp;
	c_temp = (temp – 32.0) * 5.0/9.0;
	return c_temp;
}
