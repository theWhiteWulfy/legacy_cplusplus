// Filename: \\U2Chap08\IM8bb.CPP
// A program for bubble sort 
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include<iomanip.h>
#include<string.h>
void bubble(int a[], int N);
int mark[20];
char name[20][20];
int main(void)
{
	int i , j , n , temp;
   	char  c[20];
	clrscr();
	putchar(‘\n’);
   	cout << "Enter How many students \n";
   	cin >> n;
	cout << "Enter the marks and name of students ..\n";
	for (i = 0; i < n; i++)
	{
		cout<< "Enter marks ";
		cin >> mark[i];
		cout<< "Enter name ";
      	gets(name[i]);
    }
	for (i = 0; i < n; i++)
	for (j = 0 ; j < n; j++)
		if (mark[j] > mark[j+1])
		{
			temp = mark[j];
			mark[j+1] = mark[j];
			mark[j] = temp;
			strcpy (c , name[j]);
	    	strcpy(name[j+1], name[j]);
   			strcpy(name[j], c);
	}
	cout << "\t\tSorted List...\n";
    cout << setw(10) <<  " Marks " << setw(15) << "Name" << endl;
	for (i = 0; i < n; i++)
	{
		cout << setw(10) << mark[i] << setw(15) << name[i] << endl;
	}
	return 0;
}