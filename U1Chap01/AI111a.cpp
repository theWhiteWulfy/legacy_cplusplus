//Filename: \\U1Chap01\AI111a.CPP
#include <iostream.h>
void SwitchOver (int A[ ], int N, int Split) {
	for (int K = 0; K< N; K++)
	if (K < Split)
		A[K] += K;
	else
		A[K] *= K;
}
void Display(int A[ ], int N) {
	for (int K = 0; K<N; K++)
		(K%2==0) ? cout<<A[K] << "%":cout<<A[K] << endl;
}
void main() {
	int H[ ] = {30, 40, 50, 20, 10, 5};
	SwitchOver(H, 6, 3);		
	Display(H, 6);
}