// Filename: \\U1Chap06\DL106a.CPP
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
void COUNT() {
	ifstream Fil;
	Fil.open("ARTICLE.TXT");
	char Word[80];
	int C1 = 0, C2 = 0;
	while (!Fil.eof()) {
		Fil>>Word;
		if (strcmp(Word, "this")==0)
			C1++;
		else if (strcmp(Word, "these")==0)
			C2++;
	}
	cout<<"Count of -this- in file : " << C1<<endl;
	cout<<"Count of -these- in file : " << C2;
}
main()
{
	clrscr();
	COUNT();
	return 0;
}