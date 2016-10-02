// Filename: \\U1Chap03\AI113a.CPP
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class Applicant {
	long ANo;
	char Name[20];
	float Agg;
	char Grade;
	void GradeMe();
	public:
		void ENTER();
		void RESULT();
};
void Applicant::GradeMe() {
	if (Agg>=80)
		Grade = 'A';
	else
		if ((Agg>=65) && (Agg<80))
			Grade = 'B';
		else
			if ((Agg>=50) && (Agg<65))
				Grade = 'C';
			else
				if (Agg<50)
					Grade = 'D';
}
void Applicant::ENTER() {
	cin>>ANo;
	gets(Name);
	cin>>Agg;
	GradeMe();
}
void Applicant::RESULT() {
	cout<<ANo<<Name<<Agg<<Grade<<endl;
}
void main() {
	clrscr();
	Applicant A;
	A.ENTER();
	A.RESULT();
}