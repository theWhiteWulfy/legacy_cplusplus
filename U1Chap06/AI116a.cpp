// Filename: \\U1Chap06\AI116a.CPP
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
void COUNT() {
	ifstream Fil("STORY.TXT");
	char STR[10];
	int count = 0;

	while(!Fil.eof())
	{
		Fil>>STR;
		if(strcmp(STR, "He")==0 || strcmp(STR, "She") ==0)
			count++;
	}
	cout<<"Count of He/She in file :" << count << endl;
	Fil.close();
}
void main()
{
	clrscr();
	COUNT();
	getch();
}