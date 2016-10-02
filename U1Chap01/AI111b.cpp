//Filename: \\U1Chap01\AI111b.CPP
#include <iostream.h>
void main() {
	int *Queen, Moves[ ] = {11, 22, 33, 44};
	Queen = Moves;
	Moves[2]+=22;
	cout <<"Queen @"<<*Queen<<endl;
	*Queen -= 11;
	Queen+=2;
	cout<<"Now @" << *Queen << endl;
	Queen++;
	cout<<"Finally @" << *Queen << endl;
	cout<<"New Origin @" << Moves[0]<< endl;
}
