# include<iostream.h>
# include<conio.h>

void main()
{
	clrscr();
	int iarr[]={56,627,89,768,687,78,67};
	int *ip;
	for(ip=&iarr[0];ip<=&iarr[6];ip++)
		{cout<<*ip;
		cout<<"\n";}
	getch();
}