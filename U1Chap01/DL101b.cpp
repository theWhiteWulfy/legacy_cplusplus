//Filename: \\U1Chap01\DL101b.CPP
#include<iostream.h>
#include<ctype.h>
void ChangeIt(char Text[ ], char C) {
	for (int K=0;Text[K]!='\0'; K++) {
		if (Text[K] >= 'F' && Text[K]<= 'L')
			Text[K]=tolower(Text[K]);
		else
			if (Text[K] =='E' || Text[K]== 'e')
				Text[K]=C;
			else
				if (K%2==0)
					Text[K]=toupper(Text[K]);
				else
					Text[K]= Text[K-1];
	}
}
void main() {
	char OldText[]= "pOwERALone";
	ChangeIt(OldText, '%');
	cout<< "New Text:" << OldText<<endl;
}