//Filename: \\U1Chap01\DL111c.CPP
#include <iostream.h>
void main() { 
	int Track [ ] = {10, 20, 30, 40}, *Striker;
	Striker = Track;
	Track [1] += 30;
	cout <<"Striker>"<<*Striker<<endl;
	*Striker -= 10;
	Striker++;
	cout<<"Next @" << *Striker << endl;
	Striker+=2;
	cout<<"Last @" << *Striker << endl;
	cout<<"Rest To" << Striker[0] << endl;
}