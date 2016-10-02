//Filename: \\U1Chap01\AI101b.cpp
#include<iostream.h>
#include<ctype.h>
void MyCode(char Msg[ ], char CH) {
	for (int Cnt=0;Msg[Cnt] != '\0'; Cnt++) {
		if (Msg[Cnt] >= 'B' && Msg[Cnt]<= 'G')
			Msg[Cnt]=tolower(Msg[Cnt]);
		else
			if (Msg[Cnt] == 'A' || Msg [Cnt]== 'a')
				Msg[Cnt]=CH;
			else
				if (Cnt%2==0)
					Msg[Cnt]=toupper(Msg[Cnt]);
				else
					Msg [Cnt]= Msg [Cnt-1];
	}
}
void main() {
	char MyText[]= "ApEACeDriVE";
	MyCode(MyText, '@');
	cout<< "NEW TEXT:" << MyText<<endl;
}