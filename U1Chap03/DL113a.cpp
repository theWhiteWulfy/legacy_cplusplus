// Filename: \\U1Chap03\DL113a.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class Candidate {
	long Rno;
	char Name[20];
	float Score;
	char Remarks[20];
	void AssignRem();
	public:
		void Enter();
		void Display();
};
void Candidate::AssignRem() {
	if (Score>=50)
		strcpy(Remarks, "Selected");
	else
		strcpy(Remarks, "Not Selected");
}
void Candidate::Enter() {
	cin>>Rno;
	gets(Name);
	cin>>Score;
	AssignRem();
}
void Candidate::Display() {
	cout<<Rno<<Name<<Score<<Remarks<<endl;
}
void main()
{
	clrscr();
	Candidate C;
	C.Enter();
	C.Display();
}