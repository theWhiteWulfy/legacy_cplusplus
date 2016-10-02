// Filename: \\U1Chap04\IM4db.CPP
#include <iostream.h>

class ArrayManip
{
	int Array[100];
	int n_items;
	public :
		ArrayManip();
		int addItem(int);
		void sortItems();
		int searchItem(int);
		void dispItems();
};
ArrayManip :: ArrayManip()
{
	for (int i = 0; i < 100; i++)
		Array[i] = 0;
	n_items = 0;
}
int ArrayManip :: addItem(int item)
{
	if (n_items == 100)
		return -1;
	else
	{
		Array[n_items] = item;
		n_items++;
		return 0;
	}
}
void ArrayManip :: sortItems()
{
	for (int i = 0; i < n_items-1; i++)
		for (int j = i+1; j < n_items; j++)
			if (Array[i] > Array[j])
			{
				int temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
}
int ArrayManip :: searchItem (int item)
{
	sortItems (); //Binary search only on sorted array
	int found = 0;
	int lowerBound = 0;
	int upperBound = n_items - 1;
	int currentIndex;
	while ((lowerBound <= upperBound) && !found)
	{
		currentIndex = (lowerBound + upperBound)/2;
		if (Array[currentIndex] == item)
			found = 1;
		else if (Array[currentIndex] < item)
			lowerBound = currentIndex + 1;
		else
			upperBound = currentIndex - 1;
	}
	if (found)
		return currentIndex;
	else
		return -1;
}
void ArrayManip :: dispItems ()
{
	for (int i = 0; i < n_items; i++)
		cout << Array[i] << endl;
}
void main()
{
	int n, i, itm, sitm, flag = 0;
	ArrayManip AM;
	cout << "Enter no. of items to manage : ";
	cin >> n;
	for (i=0; i<n; i++)
	{
		cout << "Enter item : " << i+1 << " ";
		cin >> itm;
		AM.addItem(itm);
	}
	cout << "Enter search item : ";
	cin >> sitm;
	flag = AM.searchItem(sitm);
	AM.dispItems();
	if (flag==-1)
		cout << "Item does not found in array list";
	else
		cout << "Item found at " << flag+1 << " position";
}

