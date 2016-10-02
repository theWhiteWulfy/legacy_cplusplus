//Filename: \\U1Chap01\DL101a.CPP
#include <iostream.h>
struct POINT
{ int X, Y, Z;};
void StepIn(POINT &P, int Step=1) {
	P.X+=Step;
	P.Y-=Step;
	P.Z+=Step;
}
void StepOut(POINT &P, int Step=1) {
	P.X-=Step;
	P.Y+=Step;
	P.Z-=Step;
}
void main() {
	POINT P1={15, 25, 5}, P2 = {10, 30, 20};
	StepIn(P1);
	StepOut(P2, 4);
	cout<<P1.X<<","<<P1.Y<<","<<P1.Z<<endl;
	cout<<P2.X<<","<<P2.Y<<","<<P2.Z<<endl;
	StepIn(P2, 12);
	cout<<P2.X<<","<<P2.Y<<","<<P2.Z<<endl;
}
