//simple class program
#include<iostream.h>
#include<stdio.h>

class matrix
{
int a[4][4];
int b[4][4];
int i;
int j;
int x;
int y;
public:
void getvalues();
void displaysum();
};
void matrix::getvalues()
{
cout<<"Enter the size of the row and column ";
cin>>x>>y;
if(x!=y)
{
cout<<"The size of the row and column should be equal";
getch();
exit(0);
}
cout<<"Enter values for the matrix A\n";
for(i=0;i
for(j=0;j
cin>>a[i][j];
cout<<"Enter the values for matrix b\n";
for(i=0;i
for(j=0;j
cin>>b[i][j];
}
void matrix::displaysum()
{
cout<<"The sum of matrix A and B is\n";
for(i=0;i
{
for(j=0;j
cout<<<"\t";
cout<
}
}
void main()
{
clrscr();
matrix m;
m.getvalues();
m.displaysum();
getch();
}
