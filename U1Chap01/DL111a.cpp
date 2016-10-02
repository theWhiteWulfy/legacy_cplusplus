//Filename: \\U1Chap01\DL111a.CPP
#include <iostream.h>
#include <string.h>
typedef char Text[80];
void main() {
	Text T = "Indian";
	int Count = strlen(T);
	cout << T << "has" << Count << "characters" << endl;
}