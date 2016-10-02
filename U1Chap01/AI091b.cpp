//Filename: \\U1Chap01\AI091b.CPP
#include<iostream.h>
#include<ctype.h>
void Secret(char Msg[ ], int N);
void main( ) {
	char SMS [ ] = "rEPorTmE";
	Secret(SMS, 2);
	cout << SMS<<endl;
}
void Secret(char Msg [ ], int N) {
	for (int C = 0; Msg [C] !='\0' ;C++)
		if ( C % 2 ==0)
			Msg[C] = Msg[C] + N;
		else if (isupper(Msg[C]))
			Msg[C] = tolower(Msg[C]);
		else
			Msg[C] = Msg[C] - N;
}