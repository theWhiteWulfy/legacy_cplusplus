// Filename: \\U1Chap04\AI084a.CPP
#include<iostream.h>
#include<string.h>
class Retail {
	char Category[20];
	char Item[20];
	int Qty;
	float Price;
	public:
	Retail() {			// Function 1
		strcpy(Category,"Cereal");
		strcpy(Item, "Rice");
		Qty=100;
		Price=25;
	}
		void show()		// Function 2
		{
			cout<<Category<<"-"<<Item<<":"<<Qty<<"@"<<Price<<endl;
		}
};
void main() {	
	Retail R;	//Statement 1
	R.show();	//Statement 2
}