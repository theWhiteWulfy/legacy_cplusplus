// Filename: \\U2Chap08\DL098a.CPP
// The function with program is as :
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Game {
	long PNo;
	char PName[20];
	long Points;
};
void SORTPOINTS(Game g[10],int n) {
	int i,j;
	Game temp;
	for(i=0;i<n;i++) {
		for(j=0;j<n-1;j++) {
			if((g[j].Points)<(g[j+1].Points)) {
				temp=g[j];
				g[j]=g[j+1];
				g[j+1]=temp;
			}
		}
	}
}
void main() {
	int i=0,n;
	Game g[10];
	clrscr();
	cout<<"Enter No. of players (<=10) ";
	cin>>n;
	for(i=0;i<n;i++) {
		cout<<"Enter Player Number: ";
		cin>>g[i].PNo;
		cout<<"Enter Player Name: ";
		gets(g[i].PName);
		cout<<"Enter player points: ";
		cin>>g[i].Points;
	}
	cout<<"\n After Sorting We have: ";
	SORTPOINTS(g,n);
	for(i=0;i<n;i++) {
		cout<<"\n Player Number: "<<g[i].PNo;
		cout<<"\n Player Name: ";
		puts(g[i].PName);
		cout<<" Player points: "<<g[i].Points;
	}
}
