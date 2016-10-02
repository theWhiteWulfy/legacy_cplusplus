// Filename: \\U2Chap08\AI118a.CPP
//The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
// The function is as :
void Get2Form1(int ALL[], int Odd[], int Even[], int N) {
	for (int I=0, J = 0, K=0; I<N; I++)
		if (I%2==0) {
			Even[J]=ALL[I];
			J++;
		} else {
			Odd[K]=ALL[I];
			K++;
		}
	cout << "The original array is....\n";
	for(int i=0;i<N;i++)
		cout<<ALL[i]<<"\t";
	cout << "\nThe odd positional array is....\n";
	for(i=0;i<K;i++)
		cout<<Odd[i]<<"\t";
	cout << "\nThe even positional array is....\n";
	for(i=0;i<J;i++)
		cout<<Even[i]<<"\t";

}
void main()
{
	int A[100], O[100], E[100], n, i;
	clrscr();
	cout << "Enter total no. array elements : ";
	cin >> n;
	cout << "\nEnter the array elements...\n";
	for(i=0;i<n;i++)
		cin >> A[i];
	Get2Form1(A, O, E, n);
}