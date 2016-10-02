// Filename: \\U2Chap08\AI088ca.CPP
#include<iostream.h>
#include<conio.h>
void swap(int a[100],int n)
{
	int t;
	for(int i=0;i<n;i++)
	{
		t = a[i];
		a[i]=a[i+1];
		a[i+1] = t;
		i++;
	}
}
void main()
{
	int a[100],n;
	clrscr();
	cout << "Enter total element for an array :";
	cin>>n;
	cout << "\nEnter the array elements : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	swap(a,n);
	cout << "\n After Swap \n";
	for(i=0;i<n;i++)
		cout <<a[i] << "  ";
	getch();
}