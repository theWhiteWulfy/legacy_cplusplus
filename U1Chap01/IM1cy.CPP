// Filename: \\U1Chap01\IM1cy.CPP
#include <iostream.h>
#include <conio.h>
void main()
{
	int n;
	do
	{
		cout<<"Enter n";
		cin>>n;
	}while((n<1)||(n>6));
	for(int i=0; i<=n; i++)
	{
		for(int k=1; k<=(n - i); k++)
			cout<<" "<<" ";
		for(int j = 1; j<=(2*i -1); j++)
			cout<<j<<" ";
		cout<<"\n";
	}
	getch();
}