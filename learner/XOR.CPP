#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x, y, f;
	cout<<"\nx\ty\t\f"<<endl<<endl;
	for(x=0;x<2;x++)
		for(y=0;y<2;y++)
			{
			f=!x&&y||x&&!y;
			cout<<x<<"\t"<<y<<"\t"<<f<<endl;
			}
	getch();
}