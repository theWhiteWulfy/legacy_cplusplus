// Filename: \\U1Chap03\IM3ba.CPP
// Program to find the operation of append, delete and stock total in an item list.
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
struct list
{
	int itemcode;
	float itemprice;
	int quantity;
};
class ItemList
{
	private: 	// Data members
		list itemlist[20];
	public:  	// Member functions
		void append(int x,int n); // Appending items in the ItemList
		void itemdisplay(int n);  // Displaying existing items
		int itemdelete(int n);
		float itemprint(int i);	// Printing the total price of all items
};
// Function body to display the present items.
void ItemList::itemdisplay(int n)
{
	for(int i=0; i<n; i++)
		cout << itemlist[i].itemcode <<	"	" << itemlist[i].itemprice
			<< "		" << itemlist[i].quantity << endl;
}
// Function to append all the items
void ItemList::append(int x, int n)
{
	for(int i=x; i<n+x; i++)
	{
		cout << "Enter Item code ";
		cin >> itemlist[i].itemcode;
		cout << "Enter Item price ";
		cin >> itemlist[i].itemprice;
		cout << "Enter Item Quantity ";
		cin >> itemlist[i].quantity;
	}
	cout << "dsfsdfldsjfldjk";
	for( i=0; i<n; i++)
	{
		cout << "\nEnter Item code "<< itemlist[i].itemcode;
		cout << "\nEnter Item price "<< itemlist[i].itemprice;
		cout << "\nEnter Item Quantity "<< itemlist[i].quantity;
	}
	getch();
}
int ItemList::itemdelete(int n)
{
	getch();
	int code, loc, prev;
	cout << "The following items are now present " << endl;
	for (int j = 0; j<n; j++)
	cout << itemlist[j].itemcode <<	"	" << itemlist[j].itemprice << "		"
		<< itemlist[j].quantity << endl;
	cout << "Enter the item code to delete ";
	cin >> code;
	for (j = 0; j < n; j++)
	{
		if (code == itemlist[j].itemcode)
		{
			loc = j;
		}
	}
	if (loc < n)
	{
		prev = loc;
		// Steps to shift a step back with the data
		while (prev < n)
		{
			itemlist[prev].itemcode = itemlist[prev+1].itemcode;
			itemlist[prev].itemprice = itemlist[prev+1].itemprice;
			itemlist[prev].quantity = itemlist[prev+1].quantity;
			prev = prev + 1;
		}
	}
	else
		return n;	// The item not found, it retain the original length
	return (n-1);	// After deleting the length of class subscript reduced to one
}
// Function body to find the total price of all the items
float ItemList::itemprint(int i)
{
	return (itemlist[i].itemprice * itemlist[i].quantity);
}
void main()
{
	int N;
	char ch;
	int i=0, j;
	int s = 0, x = 0;
	float tot = 0.0;
	ItemList Item;
	clrscr();
	cout << "Enter how many items ";
	cin >> N;
	do
	{
		clrscr();
		cout << "\n Menu to handle item" << endl;
		cout << "1 For Append " << endl;
		cout << "2 For Display" << endl;
		cout << "3 For Delete " << endl;
		cout << "4 For Total Value " << endl ;
		cout << "5 Exit " << endl << endl;
		cout << "Enter your choice ";
		cin >> ch;
		switch (ch)
		{
			case '1':
			{
				s = s + N;
				Item.append(x,N);
				x = x + N;
				break;
			}
			case '2':
			{
				clrscr();
				Item.itemdisplay(s);
				getch();
				break;
			}
			case '3':
			{
				clrscr();
				Item.itemdelete(s);
				s--;
				break;
			}
			case '4':
			{
				cout << "Total price for all the items is : ";
				for (i = 0; i<s; i++)
				{
					tot = tot + Item.itemprint(i);
				}
				cout << tot;
				getch();
				break;
			}
			case '5':
				exit(0);
		}
	}
	while (ch != '5');
}