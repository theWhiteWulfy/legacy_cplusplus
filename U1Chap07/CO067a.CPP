// Filename: \\U1Chap07\CO067a.CPP
#include<iostream.h>
#include<string.h>
class country
{
	char *country_name;
	int length;
	public:
		country() { length = 0; country_name = new char[length + 1];}
		country(char *s)
		{
			length= strlen(s); country_name = new char[length + 1];
			strcpy(country_name, s);
		}
		void display() { cout << country_name << endl;}
		void Replace(country &a, country &b)
		{
			length = a.length + b.length;
			delete country_name;
			country_name = new char[length + 1];
			strcpy(country_name, a.country_name);
			strcat(country_name, b.country_name);
		}
};
void main()
{
	char *temp = "India";
	country country1(temp), country2("Nepal"), country3("China"), S1, S2;
	S1.Replace(country1, country2);
	S2.Replace(S1, country3);
	S1.display();
	S2.display();
}