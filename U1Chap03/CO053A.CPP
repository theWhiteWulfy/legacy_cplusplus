// Filename: \\U1Chap03\CO053a.CPP
#include <iostream.h>
class STUDENT {
	int admno;
	float marks;
	public:
		STUDENT() {
			admno = 0;
			marks = 0.0;
		}
		void input() {
			cin >> admno;
			cin >> marks;
		}
		void output() {
			cout << admno;
			cout << marks;
		}
};
void main() {
	STUDENT S;
	S.input();
}
