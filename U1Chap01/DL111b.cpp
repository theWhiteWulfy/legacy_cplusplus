//Filename: \\U1Chap01\DL111b.CPP
#include <iostream.h>
void ChangeArray (int Number, int ARR[], int Size) {
	for (int L = 0; L< Size; L++)
		if (L < Number)
			ARR[L] += L;
		else
			ARR[L] *= L;
}
void Show (int ARR[ ], int Size) {
	for (int L = 0; L<Size; L++)
		(L%2!=0) ? cout<<ARR[L] << "#":cout<<ARR[L] << endl;
}
void main() {
	int Array[ ] = {30, 20, 40, 10, 60, 50};
	ChangeArray (3, Array, 6);
	Show (Array, 6);
}