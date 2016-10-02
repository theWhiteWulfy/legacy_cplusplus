//Filename: \\U1Chap01\AI101a.cpp
#include <iostream.h>
struct THREE_D
{ int X, Y, Z;};
void MoveIn(THREE_D &T, int Step=1) {
	T.X+=Step;
	T.Y-=Step;
	T.Z+=Step;
}
void MoveOut(THREE_D &T, int Step=1) {
	T.X-=Step;
	T.Y+=Step;
	T.Z-=Step;
}
void main() {
	THREE_D T1={10, 20, 5}, T2 = {30, 10, 40};
	MoveIn(T1);
	MoveOut(T2, 5);
	cout<<T1.X<<","<<T1.Y<<","<<T1.Z<<endl;
	cout<<T2.X<<","<<T2.Y<<","<<T2.Z<<endl;
	MoveIn(T2, 10);
	cout<<T2.X<<","<<T2.Y<<","<<T2.Z<<endl;
}
