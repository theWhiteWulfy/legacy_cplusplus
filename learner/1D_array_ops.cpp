#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<dos.h>

class array
{
	int n;
	int Ar[10];
	public:
	void creation(int);
	void traversal();
	void insertion(int,int);
	void deletion(int);
	void bsort();
	void bsearch();
	void lsearch();
	void merging(int);
};
void array::creation(int no)
{
	int i;

	if(no>10)
	{       cout<<"Overflow !! ";
		getch();
	}
	else
	{       cout<<"\nEnter "<<no<<" values -> \n";
		for(i=0;i<no;i++)
		cin>>Ar[i];
	}
	n=no;
}
void array::traversal()
{
	clrscr();
	int i;
	for(i=0;i<n;i++)
		cout<<setw(5)<<Ar[i];
}
void array::insertion(int num,int pos)
{
	if(n==10)
	{
		cout<<"\n\nOVERFLOW !!!\n";
		getch();
	}
	else
	{
		int i;
		for(i=n-1;i>=pos;i--)
			Ar[i+1]=Ar[i];
		Ar[pos]=num;
		n++;
	}
}
void array::deletion(int pos)
{
	int x;
	if(n==0)
	{	cout<<"\n\nUnderflow !!!";
		getch();
	}
	else
	{
		int x;
		for(x=pos;x<n;x++)
			Ar[x]=Ar[x+1];
		n--;
	}
}
void array::bsort()
{
	int x,y,temp;
	for(x=0;x<n-1;x++)
		for(y=0;y<((n-1)-x);y++)
			if(Ar[y]>Ar[y+1])
			{
				temp=Ar[y];
				Ar[y]=Ar[y+1];
				Ar[y+1]=temp;
			}
}
void array::bsearch()
{       bsort();
	int num,pos;
	cout<<"\n\nEnter the number to be searched ->\n\n";
	cin>>num;
	int beg,mid,end;
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(num!=Ar[mid]&&beg<=end)
	{
		if(num>Ar[mid])
			beg=mid+1;
		else
			end=mid-1;
		mid=(beg+end)/2;
	}				//end of loop
	if(beg>end)
	{
		pos=-1;
		cout<<"\n\n Number not found !!";
		getch();
	}
	else
	{
		pos=mid;
		cout<<endl<<"Wait while the list being automatically sorted !!\n";
		delay(2000);                        //FOR REALISTIC APPROACH
		cout<<"Number found at position -> "<<pos+1;
	}
	getch();
}
void array::lsearch()
{
	int i,pos,num;
	int flag=0;
	cout<<"\n\nEnter the number to be searched ->";
	cin>>num;
		for(i=0;i<n;i++)
		if(Ar[i]==num)
		{	flag=1;
			break;
		}
		else
			flag=0;

	if(flag==1)
		cout<<"Its at position = "<<i+1;

	else
		cout<<"no such no. found";
	getch();
}
void array::merging(int an)
{       bsort();
	int bn;
	int C[20];
	int B[10];
	cout<<"Enter number of elements in second array (max 10) ->  ";
	cin>>bn;
	cout<<"\nEnter elements -> ";
	int i,a,b,c;
	for(i=0;i<bn;i++)
		cin>>B[i];
		{
			int x,y,temp;
			for(x=0;x<n-1;x++)
			for(y=0;y<((n-1)-x);y++)
				if(B[y]>B[y+1])
			{
				temp=B[y];
				B[y]=B[y+1];
				B[y+1]=temp;
			}
		  }

	for(a=0,b=0,c=0;a<an && b<bn;)
	{
		if(Ar[a]<=B[b])
			C[c++]=Ar[a++];
		else
			C[c++]=B[b++];
	}
	if(a<an)
	{
		while(a<an)
		C[c++]=Ar[a++];
	}
	else
	{	while(b<bn)
		C[c++]=B[b++];
	}
	for(i=0;i<(an+bn);i++)
		cout<<setw(5)<<C[i];
	getch();
}







void main()
{
	array obj;
	int opt,num,pos,no;
	start:
	clrscr();

	int x=5;
	gotoxy(20,x);
	cout<<"OPERATION ON SINGLE DIMENSION ARRAY \n\n\n";
	x=x+2;
	gotoxy(20,x);
	cout<<"1.To create the list";
	x++;
	gotoxy(20,x);
	cout<<"2.To display the list";
	x++;
	gotoxy(20,x);
	cout<<"3.To insert an element";
	x++;
	gotoxy(20,x);
	cout<<"4.To delete an element ";
	x++;
	gotoxy(20,x);
	cout<<"5.To sort the list";
	x++;
	gotoxy(20,x);
	cout<<"6.To search for an element in the list (Binary search) ";
	x++;
	gotoxy(20,x);
	cout<<"7.To search for an element in the list (Linear Seach) ";
	x++;
	gotoxy(20,x);
	cout<<"8.To merge two arrays";
	x++;
	gotoxy(20,x);
	cout<<"\n\nEnter your option ->";
	cin>>opt;
	switch(opt)
	{
		case 1: cout<<"\n\nEnter number of values to be entered(max 10) -> \n";
			cin>>no;
			obj.creation(no);
			break;

		case 2: obj.traversal();
			getch();
			break;
		case 3: cout<<"Enter number and position ->";
			cin>>num>>pos;
			obj.insertion(num,pos);
			break;
		case 4: cout<<"Enter the position at which the element has to be deleted ->";
			cin>>pos;
			obj.deletion(pos);
			break;

		case 5: obj.bsort();
			break;

		case 6: obj.bsearch();
			break;
		case 7: obj.lsearch();
			break;
		case 8: obj.merging(no);
			break;
	}
	if(opt<8)
		goto start;
}


