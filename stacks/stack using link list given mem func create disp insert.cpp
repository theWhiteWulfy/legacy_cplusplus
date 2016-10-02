// Filename: \\U2Chap09\IM9da.CPP
// Addition and deletion of new books using linked list
# include<iostream.h>
# include <conio.h>
class  NODE
{
	public:
		int bookno;
		NODE *link;
};
class LINKLIST
{
	private:
		NODE *first,*last,*temp;
	public:
		void NCREATE(int);	// Create a linked list with n nodes
		void insertatk(int);	// Inserting at kth position
		void display();	// Display the linked list
};
void LINKLIST::NCREATE( int n)
{
	first = new NODE;
	cout << "\n Enter the book number ";
	cin >> first->bookno;
	first->link = NULL;
	temp = first;
	for(int i =1;i<n;i++)
	{
		last = new NODE;
		cout << "\n Enter the book number ";
		cin >> last->bookno;
		last->link = NULL;
		temp->link = last;
		temp = last;
	}
}
void LINKLIST::insertatk(int j)	// Function to insert the node at kth position
{
	int i = 0;
	NODE *newnode,*back;
	newnode = new NODE;
	cout<< "\nEnter the data value ";
	cin>>newnode->bookno;
	newnode->link = NULL;
	temp = first;
	while (i < (j-1))
	{
		back = temp;
		temp = temp->link;
		i++;
	}
	back->link = newnode;
	newnode->link = temp;
}
void LINKLIST::display()	//Function to display the link list
{
	temp = first;
	cout<< "\n The linked list is \n";
	while (temp != NULL)
	{
		cout<< "\n"<<temp->bookno;
		temp = temp->link;
	}
	getch();
}
void main()
{
	int ch,n,k;
	char ch1 = 'y';
	LINKLIST list;
	clrscr();
	cout << "\n Enter how many nodes in the list ";
	cin >> n;
	list.NCREATE(n);
	do
	{
		clrscr();
		cout<< "\n1. For insert ";
		cout << "\n2. For display ";
		cout << "\n3. For quit ";
		cout << "\nEnter your choice ";
		cin>>ch;
		switch (ch)
		{
			case 1: 
				cout << "\nEnter the position at which insertion is required ";
				cin >> k;
				list.insertatk(k);
				break;
			case 2 : 
				list.display();
				break;
		}
	} while (ch != 3);
}