// Filename: \\U2Chap08\DL118a.CPP
//The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void Get1Form2(int ALL[], int FIRST[], int SECOND[], int N, int M) {
	for (int I=0, J=0, K=0; I<N+M; I++)
		if (I%2==0)
			ALL[I]=FIRST[J++];
		else
			ALL[I]=SECOND[K++];
	cout << "\nThe ALL[] array is...\n";
	for (I=0; I<N+M; I++)
		cout << ALL[I] << "\t";
}
void main()
{
	clrscr();
	int A[100], F[100], S[100], n, m, i;
	cout << "\nEnter total no. array elements for first array : ";
	cin >> n;
	cout << "\nEnter array elements ... \n";
	for(i=0;i<n;i++)
		cin >> F[i];
	cout << "Enter total no. array elements for second array : ";
	cin >> m;
	cout << "\nEnter array elements ... \n";
	for(i=0;i<m;i++)
		cin >> S[i];
	Get1Form2(A, F, S, n, m);
}